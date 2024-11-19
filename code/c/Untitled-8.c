#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, a, b;

    // 读取输入数据，数据不能为零
    if (scanf("%d %d %d", &h, &a, &b) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // 判断乌龟是否可能爬出井口

    // 计算所需天数
    int days = 0;
    int dailyProgress = a - b; // 每天实际上升的高度

    // 如果乌龟在最后一天白天就能爬出井口的情况
    if (h <= a)
    {
        days = 1;
    }
    else if (a <= b)
    {
        printf("Impossible\n");
        return 0;
    }
    else

    {
        // 计算乌龟在不考虑最后一天的情况下需要多少天
        days = h / dailyProgress - 1; // 向上取整
    }

    printf("%d\n", days);

    return 0;
}