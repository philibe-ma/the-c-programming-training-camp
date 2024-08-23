#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "abcdef";
    char dest[20];

    int count = 10;
    strncpy(dest, src, count);
    printf("%s\n", dest);

    for (int i = 0; i < count; ++i)
    {
        printf("%d\n", dest[i]);
    }

    return 0;
}