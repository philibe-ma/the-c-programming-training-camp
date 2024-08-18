#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = {'a','b','c','d','e','f'};

    printf("%zd\n", strlen(arr));           // unknowable
    printf("%zd\n", strlen(arr+0));         // unknowable, same as strlen(arr)
    // printf("%zd\n", strlen(*arr));          // char, error
    // printf("%zd\n", strlen(arr[1]));        // char, error
    printf("%zd\n", strlen(&arr));          // char array pointer converted to char pointer, unknowable, same as strlen(arr)
    printf("%zd\n", strlen(&arr+1));        // char array pointer converted to char pointer, unknowable, differnt from strlen(str)
    printf("%zd\n", strlen(&arr[0]+1));     // unknowable, equal to strlen(arr) - 1

    return 0;
}