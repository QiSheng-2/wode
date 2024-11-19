#include <stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d%d%d", &a,&b,&c);
    sum = a + b + c;
    if (sum <= 100)
    {
        printf("%d",sum);
    }
    else{
        printf("100");
        return 0;
    }
}