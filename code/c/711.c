#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // 变量声明
    char str[9]; // 8 个字符 + 1 个 '\0' 终止符
    char st[] = "OTTER";
    while (scanf("%s", str) != EOF)
    {
        // 检查字符串长度是否为 8
        if (strlen(str) == 8)
        {
            // 检查字符串前 5 个字符是否为 "OTTER"
            if (strncmp(str, st, 5) == 0)
            {
                // 检查后三位是否是数字
                if (isdigit(str[5]) && isdigit(str[6]) && isdigit(str[7]))
                {
                    // 拆分出后三位表示的数字 num
                    int num = (str[5] - '0') * 100 + (str[6] - '0') * 10 + (str[7] - '0');
                    if (num >= 0 && num <= 256)
                    {
                        printf("Valid\n");
                    }
                    else
                    {
                        printf("Invalid\n");
                    }
                }
                else
                {
                    printf("Invalid\n");
                }
            }
            else
            {
                printf("Invalid\n");
            }
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}