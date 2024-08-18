#include <stdio.h>

int main()
{
    char *p = "abcdef";     // string as char array, 7 char elements

    printf("%zd\n", sizeof(p));         // char pointer
    printf("%zd\n", sizeof(p+1));       // char pointer
    printf("%zd\n", sizeof(*p));        // char
    printf("%zd\n", sizeof(p[0]));      // char
    printf("%zd\n", sizeof(&p));        // char pointer pointer
    printf("%zd\n", sizeof(&p+1));      // char pointer pointer
    printf("%zd\n", sizeof(&p[0]+1));   // char pointer

    return 0;
}