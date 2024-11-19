#include <stdio.h>
#include <string.h>

// 函数用于将点分十进制 IP 地址转换为无符号十进制数
unsigned int convertToUnsignedDecimal(const char *ip) {
    unsigned int result = 0;
    int parts[4];
    int partIndex = 0;

    // 逐个字符解析 IP 地址
    const char *p = ip;
    while (*p != '\0') {
        if (*p == '.') {
            p++;
            continue;
        }

        int num = 0;
        while (*p >= '0' && *p <= '9') {
            num = num * 10 + (*p - '0');
            p++;
        }

        parts[partIndex++] = num;
    }

    // 计算最终的无符号十进制数
    for (int i = 0; i < 4; i++) {
        result = (result << 8) | parts[i];
    }

    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    char ip[16];  // 最长不超过 15 个字符

    // 处理每个测试用例
    for (int i = 0; i < T; i++) {
        scanf("%s", ip);
        unsigned int decimal = convertToUnsignedDecimal(ip);
        printf("%u\n", decimal);
    }

    return 0;
}