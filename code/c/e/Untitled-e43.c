#include <stdio.h>
#include <stdbool.h>
bool contains_five(int num)
{
    while (num > 0)
    {
        if (num % 10 == 5)
        {
            return true;
        }
        num /= 10;
    }
    return false;
}
int main()
{
    int n, a, b, i, sum = 0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        a = i;
        b = n - i;
        if (!contains_five(a) && !contains_five(b))
            sum++;
    }
    printf("%d", sum);
    return 0;
}