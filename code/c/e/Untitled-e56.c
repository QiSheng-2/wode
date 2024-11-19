#include <stdio.h>

#define MOD 998244353

// 计算斐波那契数列的第 n 项，使用矩阵快速幂
void matrix_mult(long long a[2][2], long long b[2][2], long long res[2][2])
{
    long long temp[2][2];
    temp[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % MOD;
    temp[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % MOD;
    temp[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % MOD;
    temp[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % MOD;
    res[0][0] = temp[0][0];
    res[0][1] = temp[0][1];
    res[1][0] = temp[1][0];
    res[1][1] = temp[1][1];
}

void matrix_pow(long long base[2][2], long long exp, long long res[2][2])
{
    long long temp[2][2] = {{1, 0}, {0, 1}};
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            matrix_mult(temp, base, temp);
        }
        matrix_mult(base, base, base);
        exp /= 2;
    }
    res[0][0] = temp[0][0];
    res[0][1] = temp[0][1];
    res[1][0] = temp[1][0];
    res[1][1] = temp[1][1];
}

long long fibonacci(long long n, long long a, long long b)
{
    if (n == 1)
        return b % MOD;
    if (n == 2)
        return (a + b) % MOD;
    long long base[2][2] = {{1, 1}, {1, 0}};
    long long res[2][2];
    matrix_pow(base, n - 1, res);
    return (res[0][0] * b + res[0][1] * a) % MOD;
}

int main()
{
    long long a, b;
    int t;
    scanf("%lld %lld", &a, &b);
    scanf("%d", &t);

    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", fibonacci(n, a, b));
    }

    return 0;
}