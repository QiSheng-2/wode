#include <stdio.h>

int main()
{
    int n;
    // 输入初始值 n
    scanf("%d", &n);

    int sequence[1000]; // 用于存储序列（最多1000个元素）
    int length = 0;     // 序列的长度

    // 根据冰雹猜想生成序列
    while (n != 1)
    {
        sequence[length++] = n; // 将当前值加入序列
        if (n % 2 == 0)
        {
            n /= 2; // 偶数，除以2
        }
        else
        {
            n = 3 * n + 1; // 奇数，乘以3再加1
        }
    }
    sequence[length++] = 1; // 最后加入1

    // 输出序列的长度
    printf("%d\n", length);

    // 输出序列的内容
    for (int i = 0; i < length; i++)
    {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}
