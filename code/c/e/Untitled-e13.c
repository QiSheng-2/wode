#include <stdio.h>
int main()
{
    int n, i, a, t;
    int sum = 0;
    scanf("%d\n", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d ", &a);

        sum += a;
    }

    scanf("%d", &t);

    if (sum <= 0)
    {
        printf("0\nMoca finish 0 requirement!");
    }
    else
    {
        if (sum >= t)
        {
            printf("%d\nMoca finish all requirements!", t);
        }
        else
        {
            printf("%d", sum);
        }
    }
    return 0;
}