
#include <stdio.h>

int x[65];
int main()
{
    long long n;
    scanf("%lld", &n);

    int k = 0;
    for (int i = 0; i < 64; i++)
    {
        if (((n >> i) & 1) == 1)
        {
            k++;
            x[i] = i + 1;
        }
    }

    printf("%d\n", k);

    for (int i = 0; i < 65; i++)
    {
        if (x[i] != 0)
        {
            printf("%d ", x[i]);
        }
    }

    return 0;
}