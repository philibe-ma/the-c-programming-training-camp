#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "abcdef";      // string as char array, 7 char elements

    printf("%zd\n", strlen(arr));           // string 
    printf("%zd\n", strlen(arr+0));         // char pointer
    // printf("%zd\n", strlen(*arr));          // char, error
    // printf("%zd\n", strlen(arr[1]));        // char, error
    printf("%zd\n", strlen(&arr));          // char array pointer converted to char pointer, same as strlen(arr)
    printf("%zd\n", strlen(&arr+1));        // char array pointer converted to char pointer, unknowable
    printf("%zd\n", strlen(&arr[0]+1));     // char pointer, equals to strlen(arr) - 1

    return 0;
}