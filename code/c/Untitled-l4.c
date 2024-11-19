#include <stdio.h>
#include <string.h>

// 检查一个字符串是否是“超级手机号”
int isSuperPhoneNumber(const char *number) {
    if (strlen(number) == 1) return 1;  // 单个数字一定是“超级手机号”

    char firstChar = number[0];
    for (long long i = 1; i < strlen(number); i++) {
        if (number[i] != firstChar) {
            return 0;  // 发现不同数字，不是“超级手机号”
        }
    }
    return 1;  // 所有数字相同，是“超级手机号”
}

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;  // 计数器

    for (int i = 0; i < N; i++) {
        char number[16];  // 最长15个字符，加上终止符
        scanf("%s", number);

        if (isSuperPhoneNumber(number)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}