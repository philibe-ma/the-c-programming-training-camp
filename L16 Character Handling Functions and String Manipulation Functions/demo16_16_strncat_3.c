#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "abcdef";
    char dest[] = "hello \0xxxxxxxxxxxxxxxxxxxx";

    int count = 10;
    strncat(dest, src, count);
    printf("%s\n", dest);

    for (int i = 0; i < 20; ++i)
    {
        printf("%d\n", dest[i]);
    }

    return 0;
}