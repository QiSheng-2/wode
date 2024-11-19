#include <stdio.h>
#include <math.h>

// 计算公式 1 的前 n 项部分和
double calculate_pi_formula1(int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += pow(-1, i) / (2 * i + 1);
    }
    return sum * 4;
}

// 计算公式 2 的前 n 项部分和
double calculate_pi_formula2(int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += 1.0 / ((2 * i + 1) * (2 * i + 1));
    }
    return sqrt(sum * 8);
}

int main()
{
    int T;
    scanf("%d", &T);

    int n[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < T; i++)
    {
        double pi1 = calculate_pi_formula1(n[i]);
        double pi2 = calculate_pi_formula2(n[i]);
        double difference = fabs(pi1 - pi2);
        printf("%.6f\n", difference);
    }

    return 0;
}