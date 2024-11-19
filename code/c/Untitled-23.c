#include <stdio.h>
int main()
{
    int n, i, temp;
    long long t, sum;
    scanf("%d%lld\n", &n, &sum);
    temp = n;
    for (i = 0; i < n; i++)
    {

        scanf("%lld", &t);
        if (sum + t <= 0)
        {

            temp--;
        }
        else
        {
            sum = sum + t;
        }
    }
    printf("%d %lld", temp, sum);
    return 0;
}