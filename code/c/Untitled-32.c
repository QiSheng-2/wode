#include <stdio.h>
#include <stdlib.h>

// 函数用于将整数转换成24位二进制字符串
void printUnsignedMediumIntBinary(unsigned int a) {
    for (int i = 23; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a;
        scanf("%lld", &a);

        if (a >= 0 && a <= (1LL << 24) - 1) {
            // 转换并打印二进制表示
            printUnsignedMediumIntBinary(a);
            printf("\n");
        } else {
            // 输出提示信息
            printf("We need a new cpu\n");
        }
    }

    return 0;
}
