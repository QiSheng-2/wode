#include <stdio.h>

int main()
{
    int n, year, pass[11], score;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &year);
        score = 0;
        int j = 0;

        while (j < 11)
        {

            scanf("%d", &pass[j]);

            if (pass[j] == 1)
            {
                if (j < 5)
                    score += 15;
                else if (j < 7)
                    score += 5;
                else if (j < 8)
                    score += 4;
                else
                    score += 1;
            }
            else
                score += 0;

            j++;
        }

        if (year == 2024)
        {
            if (score >= 90)
                printf("Congratulations, you pass the exam and your score is %d.\n", score);
            else
                printf("You have to take the course.\n");
        }
        else
        {
            if (score >= 60)
                printf("Congratulations, you pass the exam and your score is %d.\n", score);
            else
                printf("You have to take the course.\n");
        }
    }

    return 0;
}
