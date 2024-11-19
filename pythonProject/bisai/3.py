def count_distinct_sums(N, coins):
    # 最大可能金额是 coins 的总和
    max_sum = sum(coins)
    # dp[j] 表示金额 j 是否可以被支付
    dp = [False] * (max_sum + 1)
    dp[0] = True  # 0 元可以支付

    # 遍历每个硬币面值
    for coin in coins:
        # 从后向前更新 dp 数组
        for j in range(max_sum, coin - 1, -1):
            if dp[j - coin]:  # 如果可以支付金额 j - coin
                dp[j] = True  # 那么可以支付金额 j

    # 统计可以支付的不同金额（不包括 0）
    return sum(dp[1:max_sum + 1])  # 不包括 0

# 读取输入
N = int(input().strip())
coins = list(map(int, input().strip().split()))

# 计算并输出结果
result = count_distinct_sums(N, coins)
print(result)
