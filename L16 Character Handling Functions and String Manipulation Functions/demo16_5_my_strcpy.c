#include <stdio.h>

char *my_strcpy(char *dest, const char *src)
{
    char *ret = dest;

    while (*src)
    {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';

    return ret;
}

int main()
{
    char src[] = "abcdef";
    char dest[10];

    printf("%p\n", dest);
    printf("%p\n", my_strcpy(dest, src));
    printf("%s\n", dest);

    return 0;
}