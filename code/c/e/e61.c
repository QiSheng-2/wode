#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1002
int main()
{
    // 变量声明
    char a[MAX], b[MAX];
    scanf("%s", a);
    scanf("%s", b);
    int len_a = strlen(a);

    int abs_diff = 0;
    for (int i = 0; i < len_a; i++)
    {
        abs_diff += abs(a[i] - b[i]);
    }

    printf("%d\n", abs_diff);

    return 0;
}