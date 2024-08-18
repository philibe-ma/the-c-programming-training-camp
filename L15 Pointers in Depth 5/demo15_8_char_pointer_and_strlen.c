#include <stdio.h>
#include <string.h>

int main()
{
    char *p = "abcdef";     // string as char array, 7 char elements

    printf("%zd\n", strlen(p));         // char pointer
    printf("%zd\n", strlen(p+1));       // char pointer, equals to strlen(p) - 1
    // printf("%zd\n", strlen(*p));        // char, error
    // printf("%zd\n", strlen(p[0]));      // char, error
    printf("%zd\n", strlen(&p));        // char array pointer converted to char pointer, same as strlen(p)
    printf("%zd\n", strlen(&p+1));      // char array pointer converted to char pointer, unknowable
    printf("%zd\n", strlen(&p[0]+1));   // char pointer, equals to strlen(p) - 1

    return 0;
}