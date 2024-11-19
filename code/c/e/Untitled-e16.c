#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int q, w, e, r, t, y;
    q = a / 1000000;
    w = a % 100000 / 10000;
    e = a % 10000 / 1000;
    r = a % 1000 / 100;
    t = a % 100 / 10;
    y = a % 10;
    if (q == 6 || w == 6 || e == 6 || r == 6 || t == 6 || y == 6)
    {
        printf("Ban lP");
    }
    else
    {

        printf("Xhesica win");
    }
    return 0;
}
