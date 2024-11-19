#include <stdio.h>

int main()
{
    int n,k,i,a;
    scanf("%d %d", &n, &k);
    if(n>k)
    printf("Too many little otters!\n");
    else
    {i=1;
    while(i<=n)
    {
        printf("* ");
        i++;
        

    }
    a=1;
    while(a<=(k-n))
    {
        printf("_ ");
        a++;
    }
    }
    printf("\n");
    return 0;

}
