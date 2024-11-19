#include <stdio.h>

int main()
{
    // 变量声明
    int n, i, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a);
        int b = a / 1000000, c = a / 10000 % 100, d = a / 1000 % 10, e = a % 1000;
        if ((b >= 19) && (b <= 24) && (c >= 01) && (c <= 43) && (d >= 1) && (d <= 9) && (e != 0))
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }

    return 0;
}