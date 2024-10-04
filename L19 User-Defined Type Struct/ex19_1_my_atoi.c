#include <stdio.h>
#include <ctype.h>

int my_atoi(const char *str)
{
    int sign = 1;
    int num = 0;

    while (isspace(*str))
        ++str;

    if ((!isdigit(*str)) && (*str != '-') && (*str != '+'))
    {
        return 0;
    }
    else if (*str == '-')
    {
        sign = -1;
        ++str;
    }
    else if (*str == '+')
    {
        sign = 1;
        ++str;
    }

    while (isdigit(*str))
    {
        num = num * 10 + (*str - '0');
        ++str;
    }

    return sign * num;
}

int main()
{
    printf("%d\n", my_atoi("123"));
    printf("%d\n", my_atoi("   123"));
    printf("%d\n", my_atoi(" \n  123"));
    printf("%d\n", my_atoi(" \n  +123"));
    printf("%d\n", my_atoi(" \n  -123"));
    printf("%d\n", my_atoi(" \n  "));
    printf("%d\n", my_atoi(" \n  -"));
    printf("%d\n", my_atoi(" \n  -456dbd"));

    return 0;
}