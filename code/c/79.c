#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于 qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

// 二分查找函数，返回不低于 h 的第一只水獭的编号
int binary_search(int a[], int n, int h, int original_indices[])
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] >= h)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if (left < n && a[left] >= h)
    {
        return original_indices[left]; // 返回原始编号
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *a = (int *)malloc(n * sizeof(int));
    int *original_indices = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        original_indices[i] = i + 1; // 原始编号从 1 开始
    }

    // 对身高数组进行排序，同时保持原始编号的对应关系
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // 交换身高
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                // 交换对应的原始编号
                temp = original_indices[j];
                original_indices[j] = original_indices[j + 1];
                original_indices[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        int h;
        scanf("%d", &h);
        printf("%d\n", binary_search(a, n, h, original_indices));
    }

    free(a);
    free(original_indices);
    return 0;
}