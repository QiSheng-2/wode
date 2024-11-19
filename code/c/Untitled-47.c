#include <stdio.h>
#include <string.h>
int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    char x[1000001];
    scanf("%s", x);

    int i;
    for (i = 0; i < k; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += x[j] - '0';
        }
        sprintf(x, "%d", sum);
        n = strlen(x);
    }

    printf("%s\n", x);

    return 0;
}
