#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, a, b;
    while (scanf("%d %d %d", &k, &a, &b) != EOF)
    {
        // 读取障碍数量和目标位置
        int obstacles[10][10] = {0}; // 用来标记障碍的位置，0表示没有障碍，1表示有障碍
        char s[501];                 // 存储指令序列

        // 读取指令序列
        scanf("%s", s);

        // 读取障碍物的位置
        for (int i = 0; i < k; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            obstacles[x][y] = 1; // 标记该位置为障碍
        }

        // 当前水獺的起始位置 (0, 0)
        int x = 0, y = 0;

        // 如果起点就已经是目标位置，直接输出成功
        if (x == a && y == b)
        {
            printf("Otter Success\n");
            continue;
        }

        // 定义四个方向的移动：北(N), 东(E), 南(S), 西(W)
        int dx[] = {0, 1, 0, -1}; // x轴的变化量
        int dy[] = {1, 0, -1, 0}; // y轴的变化量

        // 执行指令序列
        int success = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            // 根据指令确定移动方向
            int move_direction = -1;
            if (s[i] == 'N')
                move_direction = 0;
            else if (s[i] == 'E')
                move_direction = 1;
            else if (s[i] == 'S')
                move_direction = 2;
            else if (s[i] == 'W')
                move_direction = 3;

            // 计算目标位置
            int new_x = x + dx[move_direction];
            int new_y = y + dy[move_direction];

            // 判断目标位置是否超出边界或有障碍
            if (new_x >= 0 && new_x <= 10 && new_y >= 0 && new_y <= 10 && obstacles[new_x][new_y] == 0)
            {
                x = new_x;
                y = new_y;
            }

            // 如果到达目标位置，输出成功并停止
            if (x == a && y == b)
            {
                success = 1;
                printf("Otter Success\n");
                break;
            }
        }

        // 如果执行完指令还是没到达目标，输出失败
        if (!success)
        {
            printf("Otter Failed\n");
        }
    }
    return 0;
}
