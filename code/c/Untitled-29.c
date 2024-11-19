#include <stdio.h>
int main()
{
    int n, i, j, k, temp, jia = 0, x, a[200012];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j <= (n - 1); j++)
    {

        for (k = 2; k <= (n - j); k++)
        {
            temp = a[j];
            for (x = (j + 1); x <= (j + k - 1); x++)
            {

                temp = temp + a[x];

                if (temp > jia)
                {
                    jia = temp;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {

        if (a[i] > jia)
            jia = a[i];
    }

    printf("%d\n", jia);

    return 0;
}
