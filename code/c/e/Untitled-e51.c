#include <stdio.h>
#include <math.h>

// 计算向量的长度
double vector_length(int A, int B, int C)
{
    return sqrt(A * A + B * B + C * C);
}

// 计算两个向量的点积
int dot_product(int A1, int B1, int C1, int A2, int B2, int C2)
{
    return A1 * A2 + B1 * B2 + C1 * C2;
}

int main()
{
    int A1, B1, C1, A2, B2, C2;
    while (scanf("%d %d %d %d %d %d", &A1, &B1, &C1, &A2, &B2, &C2) == 6)
    {
        double length1 = vector_length(A1, B1, C1);
        double length2 = vector_length(A2, B2, C2);

        if (length1 == 0 || length2 == 0)
        {
            printf("Careless little lazy otter!\n");
        }
        else
        {
            int dot = dot_product(A1, B1, C1, A2, B2, C2);
            double cos_theta = fabs(dot) / (length1 * length2);
            double theta = acos(cos_theta);
            printf("%.3f\n", theta);
        }
    }
    return 0;
}