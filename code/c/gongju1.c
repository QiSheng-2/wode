#include <stdio.h>
#include <math.h>

int main()
{
    // 计算 10^9 大概是 3 的几次方
    double log10_9 = 9 * log(10);
    double log3 = log(3);
    double x = log10_9 / log3;

    printf("结果是%.6f\n", x);
    printf("你好");

    return 0;
}