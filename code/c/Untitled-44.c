#include <stdio.h>

int main()
{
    int year, month, day;
    char *weekdays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    while (scanf("%d %d %d", &year, &month, &day) == 3)
    {
        if (month < 3)
        {
            month += 12;
            year--;
        }

        int k = year % 100;
        int j = year / 100;
        int h = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

        printf("%s\n", weekdays[h]);
    }

    return 0;
}
