#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    if (N % 2==0)
    {

    // 计算奇数位置上的瓶子数量（即运动饮料的数量）
    int energyDrinks = N  / 2;

    printf("%d\n", energyDrinks);
    }
    else
    {
        
    printf("1");
    }

    return 0;
}