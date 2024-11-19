#include <stdio.h>
#include <string.h>

int countSubsequences(char *s)
{
    int count = 0;
    int len = strlen(s);
    int i, j, k;

    for (i = 0; i < len; i++)
    {
        if (s[i] == 'D')
        {
            for (j = i + 1; j < len; j++)
            {
                if (s[j] == 'D')
                {
                    for (k = j + 1; k < len; k++)
                    {
                        if (s[k] == 'Z')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[1000001];
        scanf("%s", s);
        printf("%d\n", countSubsequences(s));
    }

    return 0;
}
