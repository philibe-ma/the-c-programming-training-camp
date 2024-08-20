#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    char *ret = dest;

    while (*dest)
        ++dest;

    while (*src)
    {
        *dest = *src;
        ++dest;
        ++src;
    }

    return ret;
}

int main()
{
    char src[] = "abcdef";
    char dest[20] = "hello ";

    printf("%p\n", dest);
    printf("%p\n", my_strcat(dest, src));
    printf("%s\n", dest);

    return 0;
}