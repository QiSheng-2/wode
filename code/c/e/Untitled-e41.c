#include <stdio.h>
int main()
{
    int n, a, b, A = 0, B = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &a, &b);
        if (a > b)
        {
            A++;
        }
        else if (a < b)
        {
            B++;
        }
        else
        {
            A++;
            B++;
        }
    }
    if (A > B)
    {
        printf("Chuanyuan wins");
    }
    else if (A < B)
    {
        printf("Shie wins");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}