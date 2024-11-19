#include <stdio.h>
#include <math.h>
void sd(int a, int b, int c, int d);
int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    sd(a, b, c, d);
    return 0;
}
void sd(int a, int b, int c, int d)
{
    double s1, s2;
    s1 = sqrt(pow(a + c, 2) + pow(b - d, 2));
    s2 = sqrt(pow(a - c, 2) + pow(b + d, 2));
    if (s1 < s2)
    {
        printf("%.2lf", s1);
    }
    else
    {
        printf("%.2lf", s2);
    }
}