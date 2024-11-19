#include <stdio.h>
#include <math.h>

// 计算以 3 为底的对数
double log3(double x)
{
    return log(x) / log(3);
}

int main()
{
    int x;
    while (scanf("%d", &x) != EOF && x >= 1 && x <= 1000000000)
    {
        printf("%d =", x);
        int temp = (int)log3(x);
        int a[temp + 1];
        for (int i = 0; i <= temp; i++)
        {
            a[i] = x / pow(3, temp - i);
            x = x - a[i] * pow(3, temp - i);
        }
        int first = 1;
        for (int i = temp; i >= 0; i--)
        {
            if (a[i] != 0)
            {
                if (!first)
                {
                    printf(" +");
                }
                if (a[i] == 1)
                {
                    printf(" 3^%d", temp - i);
                }
                else
                {
                    printf(" %d*3^%d", a[i], temp - i);
                }
                first = 0;
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}