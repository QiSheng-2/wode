#include <stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    scanf("%d%d%d/n", &a1,&a2,&a3);
    scanf("%d%d%d", &b1,&b2,&b3);
    c1 = a2 * b3 - a3 * b2;
    c2 = a3 * b1 - a1 * b3;
    c3 = a1 * b2 - a2 * b1;
    printf("%d %d %d", c1, c2, c3);
    return 0;
}
