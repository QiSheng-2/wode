#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// 检查一个数是否是完全平方数
bool is_perfect_square(int num)
{
    int root = (int)sqrt(num);
    return root * root == num;
}

// 检查一个日期是否是合法日期
bool is_valid_date(int year, int month, int day)
{
    if (month < 1 || month > 12)
        return false;
    if (day < 1)
        return false;
    if (month == 2)
    {
        bool is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (is_leap)
        {
            return day <= 29;
        }
        else
        {
            return day <= 28;
        }
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return day <= 30;
    }
    return day <= 31;
}

// 将日期转换为整数
int date_to_int(int year, int month, int day)
{
    return year * 10000 + month * 100 + day;
}

int main()
{
    int y1, m1, d1, y2, m2, d2;
    while (scanf("%4d%2d%2d %4d%2d%2d", &y1, &m1, &d1, &y2, &m2, &d2) != EOF)
    {
        int count = 0;
        for (int year = y1; year <= y2; year++)
        {
            for (int month = (year == y1 ? m1 : 1); month <= (year == y2 ? m2 : 12); month++)
            {
                for (int day = (year == y1 && month == m1 ? d1 : 1); day <= (year == y2 && month == m2 ? d2 : 31); day++)
                {
                    if (is_valid_date(year, month, day))
                    {
                        int date_int = date_to_int(year, month, day);
                        if (is_perfect_square(date_int))
                        {
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}