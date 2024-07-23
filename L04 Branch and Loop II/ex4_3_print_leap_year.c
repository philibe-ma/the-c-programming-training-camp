#include <stdio.h>

#define START   1000
#define END     2000

int is_leap_year(int year);


int main()
{
    for (int i = START; i <= END; ++i)
    {
        if (is_leap_year(i))
        {
            printf("%d  ", i);
        }
    }
}


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