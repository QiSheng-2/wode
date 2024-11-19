#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, sum = 0, mid, x = 0, y = 0, z = 0;
    int count = 0; // 计数器，记录输入次数

    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a == 0 && b == 0 && c == 0)
        {
            break; // 输入结束
        }
        mid = pow((a - x), 2) + pow((b - y), 2) + pow((c - z), 2);
        sum += mid;
        x = a;
        y = b;
        z = c;
        }

    // 确保至少有一次输入

    printf("%d\n", sum);

    return 0;
}