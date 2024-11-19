#include <stdio.h>

// 计算两个 unsigned int 数的汉明距离
int hamming_distance(unsigned int a, unsigned int b)
{
    unsigned int x = a ^ b;
    int distance = 0;
    while (x)
    {
        distance += x & 1;
        x >>= 1;
    }
    return distance;
}

int main()
{
    unsigned int x1, x2, x3, x4, x5;
    while (scanf("%u %u %u %u %u", &x1, &x2, &x3, &x4, &x5) == 5)
    {
        int d1 = hamming_distance(x1, x2);
        int d2 = hamming_distance(x1, x3);
        int d3 = hamming_distance(x2, x4);
        int d4 = hamming_distance(x3, x4);
        int d5 = hamming_distance(x3, x5);
        int d6 = hamming_distance(x4, x5);

        int result = (d1 > d2 ? d1 : d2) + (d3 > d4 ? d3 : d4) + (d5 > d6 ? d5 : d6);
        printf("%d\n", result);
    }
    return 0;
}