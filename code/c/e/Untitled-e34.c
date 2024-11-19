#include <stdio.h>

#define MAX_ROOM 10000

int main()
{
    int n;

    // 读取榴莲数量
    scanf("%d", &n);

    // 初始化计数数组，大小为 MAX_ROOM + 1，索引0到10000
    int count[MAX_ROOM + 1] = {0};

    // 读取每个榴莲的房数并更新计数
    for (int i = 0; i < n; i++)
    {
        int room;
        scanf("%d", &room);
        count[room]++;
    }

    // 输出房数和对应的榴莲数量
    for (int i = 1; i <= MAX_ROOM; i++)
    {
        if (count[i] > 0)
        {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
