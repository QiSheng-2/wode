#include <stdio.h>

// 二分查找函数，返回不低于 h 的第一只水獭的编号
int binary_search(int a[], int n, int h)
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
        return left + 1; // 编号从 1 开始
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

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        int h;
        scanf("%d", &h);
        printf("%d\n", binary_search(a, n, h));
    }

    return 0;
}