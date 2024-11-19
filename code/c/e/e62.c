#include <stdio.h>
#include <string.h>
#define MAX 1002
int main()
{
    // 变量声明
    char str[MAX] = {0};
    scanf("%s", str);
    int len = strlen(str);
    int combe = 0, sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'S')
        {
            combe++;
            sum += combe;
        }
        else if (str[i] == 'L')
        {
            combe = 0;
        }
    }
    printf("%d\n", sum);

    return 0;
}