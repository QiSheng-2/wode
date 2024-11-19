#include <stdio.h>
#include <math.h>

int main()
{
    // 定义变量
    double A, B, C, D;
    double x0, y0, z0;
    double numerator, denominator, distance;

    // 读取输入
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    scanf(" (%lf,%lf,%lf)", &x0, &y0, &z0);

    // 计算分子
    numerator = fabs(A * x0 + B * y0 + C * z0 + D);

    // 计算分母
    denominator = sqrt(A * A + B * B + C * C);

    // 计算距离
    distance = numerator / denominator;

    // 输出结果，保留四位小数
    printf("%.4f\n", distance);

    return 0;
}
