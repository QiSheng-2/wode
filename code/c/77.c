#include <stdio.h>
#include <string.h>

#define MAX_LEN 10001

// 自定义 strrev 函数，用于反转字符串
void str_rev(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void reverse_except_G(char *str, int len, const char *G)
{
    int G_pos = -1;
    int G_len = strlen(G);
    for (int i = 0; i <= len - G_len; i++)
    {
        if (strncmp(&str[i], G, G_len) == 0)
        {
            G_pos = i;
            break;
        }
    }

    if (G_pos == -1)
    {
        // No G found, reverse the entire string
        str_rev(str);
    }
    else
    {
        // Reverse parts except G
        char before_G[MAX_LEN], after_G[MAX_LEN];
        strncpy(before_G, str, G_pos);
        before_G[G_pos] = '\0';
        strncpy(after_G, str + G_pos + G_len, len - G_pos - G_len);
        after_G[len - G_pos - G_len] = '\0';

        str_rev(before_G);
        str_rev(after_G);

        strncpy(str, before_G, G_pos);
        strncpy(str + G_pos, G, G_len);
        strncpy(str + G_pos + G_len, after_G, len - G_pos - G_len);
    }
}

void invert_letters(char *str, int len)
{
    for (char *p = str; p < str + len; p++)
    {
        *p = 'z' - (*p - 'a');
    }
}

int main()
{
    int k;
    char G[MAX_LEN];
    char S[MAX_LEN];

    // 读取输入
    scanf("%d", &k);
    scanf("%s", G);
    scanf("%s", S);

    int S_len = strlen(S);
    char result[MAX_LEN] = "";

    for (int i = 0; i < S_len; i += k)
    {
        char temp[k + 1];
        strncpy(temp, &S[i], k);
        temp[k] = '\0';

        char original[k + 1];
        strcpy(original, temp);

        reverse_except_G(temp, k, G);

        if (strcmp(temp, original) > 0)
        {
            strcat(result, temp);
        }
        else
        {
            invert_letters(original, k);
            strcat(result, original);
        }
    }

    printf("%s\n", result);

    return 0;
}