#include <stdio.h>

int main() {
    unsigned int n;
    int t;
    int k, alpha;

    // 读取初始整数 n
    scanf("%u", &n);

    // 读取操作次数 t
    scanf("%d", &t);

    // 执行 t 次操作
    for (int i = 0; i < t; i++) {
        // 读取位数 k 和操作类型 alpha
        scanf("%d %d", &k, &alpha);

        // 根据操作类型更新 n
        if (alpha == 0) {
            // 将第 k 位置为 0
            n &= ~(1U << k);
        } else {
            // 将第 k 位置为 1
            n |= (1U << k);
        }

        // 输出每次操作后的结果
        printf("%u\n", n);
    }

    // 输出最终结果
    printf("%u\n", n);

    return 0;
}