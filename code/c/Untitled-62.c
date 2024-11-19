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
    // 变量声明
    int n, a[LEN];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    op(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    getchar();
    printf("\n");
    if (n % 2 == 0)
    {
        printf("%.1f", (a[(n - 1) / 2] + a[(n - 1) / 2 + 1]) / 2.0);
    }
    else
    {
        printf("%.1f", (double)(a[(n - 1) / 2]));
    }
    printf("\n");

    return 0;
}