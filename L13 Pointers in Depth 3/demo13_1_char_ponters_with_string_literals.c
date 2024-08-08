#include <stdio.h>

int main()
{
    char *ptr = "abcdef";
    printf("%c\n", ptr[1]);
    printf("%c\n", *(ptr + 3));
    // *(ptr + 4) = 'h';   // error

    return 0;
}