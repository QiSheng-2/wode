#include <stdio.h>
#include <limits.h>
int main()
{
    int is_valid_input(int n, int m)
    {
        // 检查 n 和 m 是否在合理范围内
        if (n < 0 || m < 0 || n > INT_MAX / 4 || m > INT_MAX / 2)
        {
            return 0;
        }
        return 1;
    }
    int n, m;
    int x, y;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        // 读取了两个int整数，分别存入变量n，m中
        // 下面填写相应的处理代码

        x = (4 * n - m) / 2;
        y = (m - 2 * n) / 2;

        if (x >= 0 && y >= 0 && is_valid_input(n, m) && m % 2 == 0)

        {
            printf("%d %d\n", x, y);
        }
        else
        {
            printf("No answer\n");
        }
    }
    return 0;
}