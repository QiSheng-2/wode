#include <stdio.h>

// 迭代计算斐波那契数列
long long f(long long n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    long long a = 0, b = 1, c;
    for (long long i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// 计算第 n 个月的兔子总数
long long ff(long long n, long long a, long long b)
{
    if (n == 1)
        return a + b;
    if (n == 2)
        return a + b + f(1);

    long long sum = a + b;
    for (long long i = 3; i <= n; i++)
    {
        sum += f(i - 1);
    }
    return sum;
}

int main()
{
    long long a, b, t, n;

    // 读取输入并验证
    if (scanf("%lld%lld", &a, &b) != 2)
    {
        fprintf(stderr, "输入错误: 请确保输入两个非负整数\n");
        return 1;
    }
    if (scanf("%lld", &t) != 1)
    {
        fprintf(stderr, "输入错误: 请确保输入一个正整数\n");
        return 1;
    }

    // 验证输入范围
    if (a < 0 || a > 1000000000 || b < 0 || b > 1000000000 || t < 1 || t > 10)
    {
        fprintf(stderr, "输入错误: 输入值超出范围\n");
        return 1;
    }

    while (t--)
    {
        if (scanf("%lld", &n) != 1)
        {
            fprintf(stderr, "输入错误: 请确保输入一个正整数\n");
            return 1;
        }
        if (n < 1 || n > 30)
        {
            fprintf(stderr, "输入错误: n 应在 1 到 30 之间\n");
            continue;
        }
        printf("%lld\n", ff(n, a, b));
    }

    return 0;
}