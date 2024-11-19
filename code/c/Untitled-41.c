#include <stdio.h>
int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int n, i = 1, a, b;
    scanf("%d", &n);
    while (i <= n)
    {
        scanf("%d %d", &a, &b);
        printf("%d", lcm(a, b));
        i++;
    }
    return 0;
}