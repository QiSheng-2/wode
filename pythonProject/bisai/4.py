def max_energy_drinks(N):
    # dp数组初始化
    dp = [[0] * N for _ in range(N)]

    # 填充dp表
    for length in range(1, N + 1):  # length of the interval
        for l in range(N - length + 1):
            r = l + length - 1  # right index
            if l % 2 == 0:  # l is odd (1-indexed odd -> 0-indexed even)
                dp[l][r] = 1  # we take the drink if it's at l
            if r % 2 == 0:  # r is odd (1-indexed odd -> 0-indexed even)
                dp[l][r] = max(dp[l][r], 1)  # we take the drink if it's at r
            if l < r:  # At least two bottles left
                dp[l][r] += min(dp[l + 1][r], dp[l][r - 1])

    return dp[0][N - 1]


# 输入处理
N = int(input().strip())
result = max_energy_drinks(N)
print(result)
