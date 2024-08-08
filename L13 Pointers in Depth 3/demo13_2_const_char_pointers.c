#include <stdio.h>

int main()
{
    const char *ptr = "abcdef";
    printf("%c\n", ptr[1]);
    printf("%c\n", *(ptr + 3));

    return 0;
}