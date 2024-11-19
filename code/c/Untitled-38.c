#include <stdio.h>

// 计算两个数的最大公因数
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);

        int found = 0;
        for (int y = x - 1; y > 0; y--)
        {
            if (gcd(x, y) == (x ^ y))
            {
                printf("%d\n", y);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("-1\n");
        }
    }

    return 0;
}