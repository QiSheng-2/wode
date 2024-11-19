#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[21]; // 字符串长度最多为 20，加上终止符 \0 需要 21 个字符的空间

    // 读取字符串长度
    scanf("%d", &n);

    // 读取字符串
    scanf("%s", s);

    // 检查字符串中是否包含字符 'b'
    int contains_b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            contains_b = 1;
            break;
        }
    }

    // 输出结果
    if (contains_b)
    {
        printf("CVBB\n");
    }
    else
    {
        printf("CVB\n");
    }

    return 0;
}