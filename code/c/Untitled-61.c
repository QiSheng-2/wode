#include <stdio.h>
#define LEN 1001
int dian(int[], int[], int);

int main()
{
    // 变量声明
    int a[LEN], b[LEN], n, i;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        printf("%d\n", dian(a, b, n));
    }
    return 0;
}
int dian(int a[], int b[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i] * b[n - i - 1];
    }
    return sum;
}