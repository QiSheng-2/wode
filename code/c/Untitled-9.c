#include <stdio.h>
// 辗转相除法求最大公约数
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
        }
    return a;
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// 计算最小公倍数
int lcm_multiple(int nums[], int count)
{
    int result = nums[0];
    for (int i = 1; i < count; i++)
    {
        result = lcm(result, nums[i]);
    }
    return result;
}

int main()
{
    int nums[8];
    if (scanf("%d %d %d %d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7]) != 8)
    {
        fprintf(stderr, "输入错误，请输入8个整数。\n");
        return 1;
    }

    int result = lcm_multiple(nums, 8);
    printf("%d", result * 8);
    return 0;
}
