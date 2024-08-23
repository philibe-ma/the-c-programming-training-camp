#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "abcdef";
    char dest[] = "hello \0xxxxxxxxxxxxxxxxxxxx";

    int count = 3;
    strncat(dest, src, count);
    printf("%s\n", dest);

    return 0;
}