#include <stdio.h>
#include <string.h>

// 判断一个数字是否是幸运数字
int is_lucky_number(long long num)
{
    int odd_sum = 0, even_sum = 0;
    int position = 1;
    while (num > 0)
    {
        int digit = num % 10;
        if (position % 2 == 1)
        {
            odd_sum += digit;
        }
        else
        {
            even_sum += digit;
        }
        num /= 10;
        position++;
    }
    return odd_sum == even_sum;
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    int count = 0;
    for (long long i = a; i <= b; i++)
    {
        if (is_lucky_number(i))
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}