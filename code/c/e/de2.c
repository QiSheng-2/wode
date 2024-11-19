#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1005];
    while (scanf("%s", &s) != EOF)
    {
        int len = strlen(s), flag = 1;
        for (int i = 0; i < len / 2 - 1; i++)
        {
            if (isalpha(s[i]))
            {
                if (islower(s[i]) && s[len - i - 1] != s[i] - 'a' + 'A')
                {
                    printf("no\n");
                    flag = 0;
                    break;
                }
                else if (isupper(s[i]) && s[len - i - 1] != s[i] - 'A' + 'a')
                {
                    printf("no\n");
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (s[i] != s[len - i - 1])
                {
                    printf("no\n");
                    break;
                }
            }
        }
        printf("yes\n");
    }
    return 0;
}