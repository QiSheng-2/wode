#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// 检查一个数是否是素数
bool is_prime(long long num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (long long i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long pi[n];
    long long total_corn = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &pi[i]);
        if (is_prime(pi[i]))
        {
            printf("Yes\n");
            total_corn += (1LL << i); // 2^i
        }
        else
        {
            printf("No\n");
        }
    }

    printf("%lld\n", total_corn);

    if (is_prime(total_corn))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}