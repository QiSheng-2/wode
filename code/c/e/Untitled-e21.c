#include <stdio.h>
#include <limits.h>

int main()
{
    long long num;
    scanf("%lld", &num);

    if (num >= INT_MIN && num <= INT_MAX)
    {
        printf("Int is enough\n");
    }
    else
    {
        printf("We need long long\n");
    }

    return 0;
}