#include <stdio.h>
#include <math.h>

// 计算最大公约数
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
    int m, n;
    scanf("%d %d", &m, &n);

    long long total_points = 0;

    for (int x = 1; x <= m; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            total_points += gcd(x, y) - 1;
        }
    }

    for (int x = 1; x <= m; x++)
    {
        total_points += gcd(x, 0) - 1; // y = 0 的情况
    }

    for (int y = 1; y <= n; y++)
    {
        total_points += gcd(0, y) - 1; // x = 0 的情况
    }

    printf("%lld\n", total_points);

    return 0;
}