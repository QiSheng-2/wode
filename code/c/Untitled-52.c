#include <stdio.h>
int f(int n);

int main()
{
    int a, b, t, n;
    scanf("%d%d\n", &a, &b);
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n", &n);
        printf("%d\n", a * f(n + 1) + b * f(n));
    }
    return 0;
}

int f(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}
