#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    while (scanf("%lf\n", &n) != EOF)
    {
        double x = sin(n) * log(fabs(n) + 1);
        printf("%.3f\n", x);
    }

    return 0;
}
