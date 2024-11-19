#include <stdio.h>

// 函数用于计算前缀异或和
void computePrefixXor(int n, int prefixXor[]);

int main()
{
    int n, T;
    scanf("%d %d", &n, &T);

    // 初始化前缀异或和数组
    int prefixXor[n + 1];

    // 计算前缀异或和
    computePrefixXor(n, prefixXor);

    // 处理每个查询
    for (int i = 0; i < T; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);

        // 计算区间 [l, r] 的异或和
        int xorSum = prefixXor[r] ^ prefixXor[l - 1];
        printf("%d\n", xorSum);
    }

    return 0;
}
void computePrefixXor(int n, int prefixXor[])
{
    prefixXor[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        prefixXor[i] = prefixXor[i - 1] ^ num;
    }
}