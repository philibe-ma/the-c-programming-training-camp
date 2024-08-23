#include <stdio.h>

char *my_strncpy(char *dest, const char *src, size_t count)
{
    char *ret = dest;

    for (int i = 0; i < count; ++i)
    {
        if (*src)
        {
            *dest = *src;
            ++src;
        }
        else
        {
            *dest = '\0';
        }
        ++dest;
    }

    return ret;
}

int main()
{
    char src[] = "abcdef";
    char dest[20];

    int count = 10;
    my_strncpy(dest, src, count);
    printf("%s\n", dest);

    for (int i = 0; i < count; ++i)
    {
        printf("%d\n", dest[i]);
    }

    return 0;
}