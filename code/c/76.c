#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 500000

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int *brightness = (int *)malloc(n * sizeof(int));
        memset(brightness, 0, n * sizeof(int));

        int *light_positions = (int *)malloc(k * sizeof(int));
        int *light_levels = (int *)malloc(k * sizeof(int));

        for (int i = 0; i < k; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            light_positions[i] = a - 1; // 转换为 0 索引
            if (b == 0)
            {
                light_levels[i] = 15;
            }
            else if (b == 1)
            {
                light_levels[i] = 12;
            }
            else if (b == 2)
            {
                light_levels[i] = 8;
            }
            else if (b == 3)
            {
                light_levels[i] = 4;
            }
        }

        for (int i = 0; i < k; i++)
        {
            int pos = light_positions[i];
            int level = light_levels[i];
            for (int j = 0; j < n; j++)
            {
                int distance = abs(j - pos);
                int new_brightness = level - distance;
                if (new_brightness > brightness[j])
                {
                    brightness[j] = new_brightness;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (brightness[i] <= 7)
            {
                count++;
            }
        }

        printf("%d\n", count);

        free(brightness);
        free(light_positions);
        free(light_levels);
    }

    return 0;
}