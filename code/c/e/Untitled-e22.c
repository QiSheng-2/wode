#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int culture, innovation, competition, work, arts;
        scanf("%d %d %d %d %d", &culture, &innovation, &competition, &work, &arts);

        double total_score = culture * 1.0 + innovation * 0.4 + competition * 0.2 + work * 0.2 + arts * 0.1;
        if (total_score > 100)
        {
            total_score = 100;
        }

        printf("%.2f\n", total_score);
    }

    return 0;
}