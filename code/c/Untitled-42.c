#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, i, j;
    unsigned long long int A;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%llu", &A);
        for (j = m - 1; j >= 0; j--)
        {
            if ((A >> j) & 1)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
