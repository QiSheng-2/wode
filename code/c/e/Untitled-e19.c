#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, h, a, b, temp;
    scanf("%d", &t);
    while (t--)
    {
        /* code */

        scanf("%d%d%d", &h, &a, &b);

        if (a < 0)
        {
            if (b < 0)
            {
                temp = a;
                a = -b;
                b = -temp;
            }
            else
            {
                b = b - a;
                a = 0;
            }
        }
        else
        {
            if (b < 0)
            {
                /* code */
                a = a - b;
                b = 0;
            }
        }

        // 计算所需天数
        int days;
        // 每天实际上升的高度

        // 如果乌龟在最后一天白天就能爬出井口的情况
        if (h <= a)
        {
            days = 1;
        }
        else if (a <= b)
        {
            printf("Impossible\n");
        }
        else

        {
            // 计算乌龟在不考虑最后一天的情况下需要多少天
            days = (h - a) / (a - b) + 1; // 向上取整
        }

        printf("%d\n", days);
    }

    return 0;
}