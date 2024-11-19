#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum_scores = 0.0;
    double sum_weighted_scores = 0.0;
    double sum_credits = 0.0;

    for (int i = 0; i < n; i++)
    {
        int score;
        double credit;
        scanf("%d %lf", &score, &credit);

        sum_scores += score;
        sum_weighted_scores += score * credit;
        sum_credits += credit;
    }

    double arithmetic_mean = sum_scores / n;
    double weighted_mean = sum_weighted_scores / sum_credits;

    printf("%.2f %.2f\n", arithmetic_mean, weighted_mean);

    return 0;
}