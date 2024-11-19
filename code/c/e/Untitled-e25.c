#include <stdio.h>
int main()
{
    int n, k;
    long long a[200006];
    long long sum = 0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {

        scanf("%lld", &a[i]);
        sum += a[i];
    }
    long long lun = sum / k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < lun * k)
        {
            printf("0 ");
        }
        else
        {
            printf("%lld ", a[i] - lun * k);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if ((sum - a[i]) >= lun * k)
        {
            printf("%lld ", a[i]);
        }
        else
        {
            printf("%lld ", sum - lun * k);
        }
    }
    printf("\n");
    return 0;
}