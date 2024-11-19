#include <stdio.h>
#include <stdint.h>

int32_t binary_to_signed_integer(const char *binary_str)
{
    uint32_t num = 0;

    // 将二进制字符串转换为无符号整数
    for (int i = 0; i < 32; i++)
    {
        num = num << 1; // 左移1位
        if (binary_str[i] == '1')
        {
            num |= 1; // 如果当前位是'1'，将最低位设置为1
        }
    }

    // 如果符号位是1（即最高位为'1'），则转换为负数
    if (binary_str[0] == '1')
    {
        return num - (1 << 32); // 32位补码转为负数
    }

    return num; // 正数直接返回
}

int main()
{
    char binary_str[33]; // 存储32位二进制字符串（最多有32位，最后1位为'\0'）

    while (scanf("%32s", binary_str) != EOF)
    {
        int32_t result = binary_to_signed_integer(binary_str);
        printf("%d\n", result); // 输出对应的十进制整数
    }

    return 0;
}
