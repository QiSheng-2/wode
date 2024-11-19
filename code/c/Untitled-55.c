#include <stdio.h>

// 递归函数：将 n 个水獭从源队列移动到目标队列
void move_otters(int n, char source, char target, char auxiliary)
{
    if (n == 1)
    {
        printf("Moca move otter %d from queue %c to queue %c\n", n, source, target);
        return;
    }
    move_otters(n - 1, source, auxiliary, target);
    printf("Moca move otter %d from queue %c to queue %c\n", n, source, target);
    move_otters(n - 1, auxiliary, target, source);
}

int main()
{
    int n;
    scanf("%d", &n);
    move_otters(n, 'A', 'C', 'B');
    return 0;
}