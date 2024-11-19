#include <stdio.h>

int main()
{
    // 变量声明
    int N, M, P;
    scanf("%d%d%d", &N, &M, &P);
    int a[N][M], b[M][P], c[N][P];

    // 读取矩阵 a 的元素
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 读取矩阵 b 的元素
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // 初始化结果矩阵 c
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            c[i][j] = 0;
        }
    }

    // 矩阵乘法计算
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            for (int k = 0; k < M; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 输出结果矩阵 c
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            if (j > 0)
            {
                printf(" ");
            }
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}