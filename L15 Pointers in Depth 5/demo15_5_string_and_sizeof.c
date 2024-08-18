#include <stdio.h>

int main()
{
    char arr[] = "abcdef";      // string as char array, 7 char elements

    printf("%zd\n", sizeof(arr));           // char array
    printf("%zd\n", sizeof(arr+0));         // char pointer
    printf("%zd\n", sizeof(*arr));          // char
    printf("%zd\n", sizeof(arr[1]));        // char
    printf("%zd\n", sizeof(&arr));          // char array pointer
    printf("%zd\n", sizeof(&arr+1));        // char array pointer
    printf("%zd\n", sizeof(&arr[0]+1));     // char pointer

    return 0;
}