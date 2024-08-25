#include <stdio.h>

void *my_memset(void *dest, int ch, size_t count)
{
    void *ret = dest;

    for (int i = 0; i < count; ++i)
    {
        *(char *)dest = (unsigned char)ch;
        dest = (char *)dest + 1;
    }

    return ret;
}

int main()
{
    char str[] = "hello world";
    printf("%s\n", str);
    my_memset(str, 'x', 6);
    printf("%s\n", str);

    return 0;
}