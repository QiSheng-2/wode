#include <stdio.h>
#define LEN 2001

void op(int a[], int n)
{
    int i, j, temp, flag;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag = 1;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    int a[LEN];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    op(a, n);

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");

    double median;
    if (n % 2 == 0)
    {
        median = (a[n / 2 - 1] + a[n / 2]) / 2.0;
    }
    else
    {
        median = a[n / 2];
    }
    printf("%.1f\n", median);

    return 0;
}