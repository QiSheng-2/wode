#include <stdio.h>
#include <stdlib.h>

#define MAX_N 40001

int dp[MAX_N];

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int m;
    scanf("%d", &m);

    // 初始化 dp 数组
    dp[1] = 1;

    // 动态规划计算 dp[n]
    for (int n = 2; n <= m; n++)
    {
        dp[n] = 0;
        for (int k = 1; k < n; k++)
        {
            dp[n] = max(dp[n], dp[k] + dp[n - k] + k * (n - k));
        }
    }

    // 输出结果
    printf("%d\n", dp[m]);

    return 0;
}