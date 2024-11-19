#include <stdio.h>

// 判断是否是闰年
int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取某个月的天数
int get_days_in_month(int year, int month)
{
    if (month == 2)
    {
        return is_leap_year(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    return 31;
}

// 获取某年某月的第一天是星期几
int get_first_day_of_month(int year, int month)
{
    int day = 1;
    int y = year;
    int m = month;
    if (m < 3)
    {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int h = (day + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (h + 5) % 7; // 将结果转换为 0=Sun, 1=Mon, ..., 6=Sat
}

int main()
{
    int year, month;
    scanf("%d %d", &year, &month);

    int days_in_month = get_days_in_month(year, month);
    int first_day = get_first_day_of_month(year, month);

    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // 打印前导空格
    for (int i = 0; i < first_day; i++)
    {
        printf("    ");
    }

    // 打印日期
    for (int day = 1; day <= days_in_month; day++)
    {
        printf("%3d ", day);
        if ((first_day + day) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}