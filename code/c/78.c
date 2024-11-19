#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于 qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // 对擂台位置进行排序
        qsort(a, n, sizeof(int), compare);

        int count = 0;
        int i = 0;

        while (i < n)
        {
            // 选择当前擂台位置为起点
            int start = a[i];
            count++;

            // 找到第一个不在当前威慑范围内的擂台
            while (i < n && a[i] <= start + 2 * m)
            {
                i++;
            }
        }

        printf("%d\n", count);

        free(a);
    }

    return 0;
}