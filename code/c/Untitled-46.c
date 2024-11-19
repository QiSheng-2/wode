#include <stdio.h>

void printA(int k)
{
    int i, j;
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j <= 2 * i - 3; j++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = k; i >= 1; i--)
    {
        for (j = 1; j <= k - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j <= 2 * i - 3; j++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printC(int k)
{
    int i, j;
    for (i = 1; i <= 2 * k + 1; i++)
    {
        if (i == 1 || i == 2 * k + 1)
        {
            for (j = 1; j <= 4 * k - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for (j = 1; j <= 4 * k - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int k;
    scanf("%d", &k);
    printA(k);
    printf("\n");
    printC(k);
    return 0;
}
