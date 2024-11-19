#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // 读取配料的数量

    int P[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &P[i]); // 读取配料的价格
    }

    long long total_cost = 0;

    // 遍历所有的配料组合，组合的数量为 2^n
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int count = 0;              // 用来记录选中的配料的数量
        long long current_cost = 6; // 基础售价是 6 元

        // 遍历每一个配料是否被选中
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            { // 如果配料 i 被选中
                count++;
                // 计算配料 i 的费用，倒数第 count 个添加
                current_cost += P[i] * count;
            }
        }

        // 累加当前组合的总费用
        total_cost += current_cost;
    }

    // 输出最终的总费用
    printf("%lld\n", total_cost);

    return 0;
}
