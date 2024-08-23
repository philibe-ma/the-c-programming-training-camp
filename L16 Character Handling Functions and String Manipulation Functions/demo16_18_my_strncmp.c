#include <stdio.h>

int my_strncmp(const char *lhs, const char *rhs, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        if (*lhs || * rhs)
        {
            if (*lhs - *rhs < 0)
                return -1;
            else if (*lhs - *rhs > 0)
                return 1;
            ++lhs;
            ++rhs;
        }
        else
            break;
    }
    return 0;
}

int main()
{
    char str1[] = "abc123";
    char str2[] = "abc";

    int count = 10;
    printf("%d\n", my_strncmp(str1, str2, count));

    return 0;
}