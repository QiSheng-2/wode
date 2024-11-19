#include <stdio.h>

int main()
{
    // 变量声明
    int n, a, b;
    double count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a != b)
        {
            count++;
        }
    }
    printf("%.1f%%", count / n * 100);

    return 0;
}