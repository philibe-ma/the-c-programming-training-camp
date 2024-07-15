#include <stdio.h>
#include <string.h>

// Character strings are ended with '\0'.
int main()
{
    char s[] = {'a', 'b', 'c'};
    printf("%d\n", strlen(s));

    return 0;
}