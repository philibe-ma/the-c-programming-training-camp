#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcdef";
    char *ptr = "xxxxxx";   // points to a string literal
    
    strcpy(ptr, str);
    printf("%s\n", ptr);    // error, the string literal could not be modified

    return 0;
}