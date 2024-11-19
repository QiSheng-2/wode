#include <stdio.h>
int main()
{
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    a = m / n;
    b = m % n;
    if (n == 0)
        printf("Wait a minute");
    else
    {
        printf("%d\n", a);
        printf("%d", b);
    }
    return 0;
}
