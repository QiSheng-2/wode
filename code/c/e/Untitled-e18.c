#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max_power = -1;
    int max_index = -1;

    for (int i = 0; i < n; i++)
    {
        int power;
        scanf("%d", &power);

        if (power > max_power || (power == max_power && i > max_index))
        {
            max_power = power;
            max_index = i;
        }
    }

    // 编号从1开始，所以输出时加1
    printf("%d\n", max_index + 1);

    return 0;
}