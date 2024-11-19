#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int zuo(int a, int b, int c);

int main()
{
    int x, y, z, w, e, r, o, p, q;
    int n, i;
    int d;
    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &w, &e, &r);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &o, &p, &q);
        d = zuo(o, min(x, w), max(x, w)) + zuo(p, min(y, e), max(y, e)) + zuo(q, min(z, r), max(z, r));

        if (d == 0)
        {
            printf("Inner");
        }
        else if ((d > 0) && (d < 4))
        {
            printf("Edge");
        }
        else
        {
            printf("Outer");
        }
        printf("\n");
    }
    return 0;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int zuo(int a, int b, int c)
{
    if ((a > b) && (a < c))
        return 0;
    else if ((a == b) || (a == c))

        return 1;
    else if ((a < b) || (a > c))

        return 4;
}
