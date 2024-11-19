#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int id, class;
        scanf("%d%d\n", &id, &class);
        printf("Greetings from BUAA, your Student ID is %d, Class Number is %d.\n", id, class);
    }
    return 0;
}