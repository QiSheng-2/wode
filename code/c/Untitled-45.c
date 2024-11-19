#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int count = 0;
        int factors[100]; // 假设最多有1000个因数

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                factors[count++] = i;
            }
        }

        printf("%d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", factors[i]);
        }
        printf("\n");
    }

    return 0;
}
