#include <stdio.h>

// 计算组合数 C(n, k)
int combination(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    int res = 1;
    for (int i = 1; i <= k; i++)
    {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main()
{
    int p, q, t;
    scanf("%d %d %d", &p, &q, &t);

    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int count = 0;
        for (int k = m; k <= p && k <= n; k++)
        {
            int remaining = n - k;
            if (remaining <= q)
            {
                count += combination(p, k) * combination(q, remaining);
            }
        }

        printf("%d\n", count);
    }

    return 0;
}