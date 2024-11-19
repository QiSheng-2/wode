#include <stdio.h>

int main()
{
    int n, i, score = 0, combo = 0;
    char ch;

    scanf("%d", &n);
    int a[n];
    getchar();
    for (i = 0; i < n; i++)
    {
        ch = getchar();
        switch (ch)
        {
        case 'p':

            score += 300;
            break;
        case 'g':

            score += 208;
            break;
        case 'b':

            score += 105;
            break;

        default:

            score += 0;
            break;
        }
        switch (ch)
        {
        case 'p':
            // 如果 ch 是 'A'，执行以下代码
            combo++;
            break;
        case 'g':
            // 如果 ch 是 'B'，执行以下代码
            combo++;
            break;
        default:
            combo = 0; // 如果 ch 不是 'A' 或 'B'，执行以下代码
            break;
        }
        a[i] = combo;
        getchar();
    }
    int max_combo = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max_combo)
        {
            max_combo = a[i];
        }
    }
    printf("%d\n", score);
    printf("%d\n", max_combo);
    if (score == n * 300)
        printf("All Perfect!");
    else if (max_combo == n)
        printf("Full Combo!");
    else
        printf("Moca Complete!");
    printf("\n");
    return 0;
}