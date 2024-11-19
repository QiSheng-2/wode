#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d %d %d", &n, &i, &j);
    int a = (n * 100 + i * 10 + j) / 259;
    printf("%d", a);
    return 0;
}