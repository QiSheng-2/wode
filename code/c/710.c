#include <stdio.h>
#include <string.h>

#define MAX_LEN 10001

// 检查字符串是否是容易的串
int is_easy(const char *str, int len)
{
    for (int i = 1; i <= len / 2; i++)
    {
        if (strncmp(str + len - 2 * i, str + len - i, i) == 0)
        {
            return 1; // 是容易的串
        }
    }
    return 0; // 是困难的串
}

// 生成字典序第 n 小的困难的串
void generate_difficult_string(int n, int L, char *result)
{
    int len = 0;
    char current[MAX_LEN] = {0};
    int count = 0;

    while (count < n)
    {
        int found = 0;
        for (int i = 0; i < L; i++)
        {
            current[len] = 'A' + i;
            current[len + 1] = '\0';
            if (!is_easy(current, len + 1))
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            len++;
            count++;
        }
        else
        {
            len--;
            while (current[len] == 'A' + L - 1)
            {
                len--;
            }
            current[len]++;
            current[len + 1] = '\0';
        }
    }

    strcpy(result, current);
}

int main()
{
    int n, L;
    scanf("%d %d", &n, &L);

    char result[MAX_LEN];
    generate_difficult_string(n, L, result);

    printf("%s\n", result);

    return 0;
}