#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    char s[10001]; // 最多 10000 个字符

    // 读取输入
    scanf("%d", &n);
    scanf("%s", s);

    // 统计字符出现次数
    int freq[128] = {0}; // ASCII 字符范围
    int max_freq = 0;
    char most_frequent_char = '\0';
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i]]++;
        if (freq[s[i]] > max_freq)
        {
            max_freq = freq[s[i]];
            most_frequent_char = s[i];
        }
    }
    // 处理字符串
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (islower(s[i]))
        { // 小写字母转大写
            s[i] = toupper(s[i]);
        }
        else if (isupper(s[i]))
        { // 大写字母转小写
            s[i] = tolower(s[i]);
        }
    }

        // 输出结果
    printf("%s\n", s);
    printf("%c\n", most_frequent_char);
    printf("%d\n", max_freq);

    return 0;
}