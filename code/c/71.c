#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // 变量声明
    char str[10];
    char st[5] = "OTTER";
    while (scanf("%s", str) != EOF)
    {
        if (strstr(st, str) != NULL && isdigit(str[5]) && isdigit(str[6]) && isdigit(str[7]) && strlen(str) == 8)
        {
            // 拆分出后三位表示的数字 num
            int num = (str[5] - '0') * 100 + (str[6] - '0') * 10 + (str[7] - '0');
            if (num >= 0 && num <= 256)
                printf("Valid\n");
            else
                printf("Invalid\n");
        }
        else
            printf("Invalid\n");
    }
}