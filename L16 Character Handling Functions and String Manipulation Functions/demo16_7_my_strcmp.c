#include <stdio.h>
#include <string.h>

int my_strcmp(const char *lhs, const char *rhs)
{
    while (*lhs != 0 || *rhs != 0)
    {
        if (*lhs - *rhs < 0)
            return -1;
        else if (*lhs - *rhs > 0)
            return 1;
        ++lhs;
        ++rhs;
    }
    return 0;
}

int main()
{
    char str1[] = "abc";
    char str2[] = "ghj";

    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", my_strcmp(str1, str2));

    return 0;
}