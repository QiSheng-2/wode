#include <stdio.h>

// 函数用于计算从 0 变为目标整数 n 的最小操作次数
int minOperations(int n) {
    int operations = 0;

    // 逆向操作，直到 n 变为 0
    while (n > 0) {
        if (n % 2 == 0) {
            // 如果 n 是偶数，除以 2
            n /= 2;
        } else {
            // 如果 n 是奇数，减去 1
            n -= 1;
        }
        operations++;
    }

    return operations;
}

int main() {
    int T;
    scanf("%d", &T);

    // 处理每个测试用例
    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        int operations = minOperations(n);
        printf("%d\n", operations);
    }

    return 0;
}