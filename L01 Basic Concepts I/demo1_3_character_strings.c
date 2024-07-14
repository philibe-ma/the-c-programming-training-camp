#include <stdio.h>

// Character strings are ended with '\0'.
int main()
{
    char str1[] = "abc";
    char str2[] = {'a', 'b', 'c'};

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}