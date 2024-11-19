#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int coins[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &coins[i]);
    }

    bool amounts[3001] = {false};  // 用于标记所有可能的金额
    int uniqueAmounts = 0;

    // 处理单枚硬币的情况
    for (int i = 0; i < N; i++) {
        if (!amounts[coins[i]]) {
            amounts[coins[i]] = true;
            uniqueAmounts++;
        }
    }

    // 处理两枚硬币的情况
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = coins[i] + coins[j];
            if (!amounts[sum]) {
                amounts[sum] = true;
                uniqueAmounts++;
            }
        }
    }

    // 处理三枚硬币的情况
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = coins[i] + coins[j] + coins[k];
                if (!amounts[sum]) {
                    amounts[sum] = true;
                    uniqueAmounts++;
                }
            }
        }
    }

    printf("%d\n", uniqueAmounts+1);

    return 0;
}