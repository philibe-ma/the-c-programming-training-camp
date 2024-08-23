#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "abcdef";
    char dest[20];

    int count = strlen(src) + 1;
    strncpy(dest, src, count);
    printf("%s\n", dest);

    return 0;
}