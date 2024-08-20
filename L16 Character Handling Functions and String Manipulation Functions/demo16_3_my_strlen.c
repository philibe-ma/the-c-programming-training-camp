#include <stdio.h>

size_t my_strlen(const char *str)
{
    char *ptr = str;
    while (*ptr)
        ++ptr;
    return ptr - str;
}

int main()
{
    char str[] = "abcdef";
    printf("%zd\n", my_strlen(str));

    return 0;
}