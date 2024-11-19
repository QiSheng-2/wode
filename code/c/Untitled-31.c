#include <stdio.h>
#include <stdint.h>

int main() 
{
    int n;
    int numbers[10000]; // 假设最多存储100个整数
    int count = 0; // 用于记录输入的整数个数

    while (scanf("%d", &n)!= EOF)
    {
        numbers[count] = n;
        count++;
        if (count == 10000)
            break; // 达到最大存储数量，停止输入
    }

    // 统一输出所有输入的整数的二进制表示
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 31; j >= 0; j--)
        {
            printf("%d", (numbers[i] >> j) & 1);
        }
        printf("\n"); 
    }

    return 0;
}
