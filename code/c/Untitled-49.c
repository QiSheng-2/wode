#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int A[3000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (A[i] + A[j] + A[k] == m)
                {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
