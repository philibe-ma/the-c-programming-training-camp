#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "abcdef";
    char dest[20];

    int count = 3;
    strncpy(dest, src, count);
    dest[count] = '\0';
    printf("%s\n", dest);

    return 0;
}