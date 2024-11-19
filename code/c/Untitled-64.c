#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m, p, q;
    scanf("%d %d %d %d", &n, &m, &p, &q);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int pooled_rows = n / p;
    int pooled_cols = m / q;
    int pooled_matrix[pooled_rows][pooled_cols];

    for (int i = 0; i < pooled_rows; i++)
    {
        for (int j = 0; j < pooled_cols; j++)
        {
            int max_value = INT_MIN;
            for (int x = 0; x < p; x++)
            {
                for (int y = 0; y < q; y++)
                {
                    int value = matrix[i * p + x][j * q + y];
                    if (value > max_value)
                    {
                        max_value = value;
                    }
                }
            }
            pooled_matrix[i][j] = max_value;
        }
    }

    for (int i = 0; i < pooled_rows; i++)
    {
        for (int j = 0; j < pooled_cols; j++)
        {
            if (j > 0)
            {
                printf(" ");
            }
            printf("%d", pooled_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}