#include <stdio.h>

char *my_strncat(char *dest, const char *src, size_t count)
{
    char *ret = dest;

    while (*dest)
        ++dest;

    for (int i = 0; i < count; ++i)
    {
        if (*src)
        {
            *dest = *src;
            ++src;
            ++dest;
        }
        else
            break;
    }
    *dest = '\0';

    return ret;
}

int main()
{
    char src[] = "abcdef";
    char dest[] = "hello \0xxxxxxxxxxxxxxxxxxxx";

    int count = 10;
    my_strncat(dest, src, count);
    printf("%s\n", dest);

    for (int i = 0; i < 20; ++i)
    {
        printf("%d\n", dest[i]);
    }

    return 0;
}