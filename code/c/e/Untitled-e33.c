#include <stdio.h>

int main()
{
    int a, b;

    // 读取多组数据
    while (scanf("%d %d", &a, &b) != EOF)
    {
        // 计算 a ⊙ b = ~(a & b)
        int result = ~(a & b);
        // 输出结果
        printf("%d\n", result);
    }

    return 0;
}
