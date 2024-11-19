#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main()
{
    // 变量声明
    char s1[MAX_LEN], s2[MAX_LEN], s3[MAX_LEN];
    char combined[3 * MAX_LEN] = "";

    // 读取输入的三个字符串
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    // 将每个字符串按倒序拼接在一起

    strcat(combined, s3);
    strcat(combined, s2);
    strcat(combined, s1);

    // 输出新字符串的后半部分
    int combined_len = strlen(combined);
    printf("%s\n", combined + combined_len / 2);

    return 0;
}