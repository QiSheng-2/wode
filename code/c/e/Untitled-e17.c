#include <stdio.h>
int main()
{
    int a, b, c, p;
    scanf("%d %d %d", &a, &b, &p);
    if ((a + b) >= 0)
    {
        printf("%d", c = (a + b) % p);
    }
    else
        printf("%d", c = (a + b) % p + p);
    return 0;
}