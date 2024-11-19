#include <stdio.h>
#include <string.h>
#define LEN 100001

int main()
{
    // 变量声明
    int n;
    char a[LEN];
    scanf("%d", &n);
    while (n--)
    {
        int sum = 0;
        scanf("%s", a);
        int c = strlen(a);
        // 输出
        if (strlen(a) % 2 == 0)
        {
            char b[LEN];
            for (int i = 0; i < c; i++)
            {
                b[i] = a[c - 1 - i];
            }
            for (int i = 0; i < c; i++)
            {
                if (a[i] != b[i])
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }
            if (sum == c)
            {
                printf("Wingardium Leviosa\n");
            }
            else
            {
                printf("The spell fails\n");
            }
        }
        else
        {
            char b[LEN];
            for (int i = 0; i < c; i++)
            {
                b[i] = a[c - 1 - i];
            }
            for (int i = 0; i < c; i++)
            {
                if (a[i] == b[i])
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }
            if (sum == c)
            {
                printf("Wingardium Leviosa\n");
            }
            else
            {
                printf("The spell fails\n");
            }
        }
    }
    return 0;
}
