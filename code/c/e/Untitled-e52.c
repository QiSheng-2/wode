#include <stdio.h>

// 计算私钥 x 的函数
long long inv(long long a, long long p)
{
    long long ans = 1, b = p - 2;
    a = (a % p + p) % p;
    for (; b; b >>= 1)
    {
        if (b & 1)
            ans = (a * ans) % p;
        a = (a * a) % p;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long a, p;
        scanf("%lld %lld", &a, &p);
        printf("%lld\n", inv(a, p));
    }

    return 0;
}