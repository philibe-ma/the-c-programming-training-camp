#include <stdio.h>

int is_leap_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    else if (year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int get_days(int year, int month)
{
    return (is_leap_year(year) && (month == 2)) ? (days[month-1] + 1) : days[month-1];
}

int main()
{
    int year;
    int month;

    while (scanf("%d %d", &year, &month) != EOF)
    {
        printf("%d\n", get_days(year, month));
    }
}