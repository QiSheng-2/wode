#include <stdio.h>
int main()
{
    int sum = 0,n=0;
    int number;

    scanf("%d", &number);
    while (number != -1)
    {
        sum = sum + number;
        n++;
        scanf("%d", &number);
    
    }
    if(n>0)
    printf("%d", sum / n);
    return 0;

          
    
}
