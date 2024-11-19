#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001], mi[1001];
    int n, i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        str[i] = getchar();
    }
    getchar();
    for (i = 0; i < n; i++)
    {
        mi[i] = getchar();
    }
    for (i = 0; i < n; i++)
    {
        if ((int)(mi[i]) >= 97)
        {
            if ((int)((mi[i] - str[i] % 26)) < 97)
            {
                printf("%c", (char)(mi[i] - str[i] % 26 + 26));
            }
            else
            {
                printf("%c", (char)(mi[i] - str[i] % 26));
            }
        }
        if ((int)(mi[i]) < 97)

        {
            if ((int)((mi[i] - str[i] % 26)) < 65)
            {
                printf("%c", (char)(mi[i] - str[i] % 26 + 26));
            }
            else
            {
                printf("%c", (char)(mi[i] - str[i] % 26));
            }
        }
    }

    return 0;
}