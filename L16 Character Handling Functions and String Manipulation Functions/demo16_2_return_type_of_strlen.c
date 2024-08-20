#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcdef";
    char str2[] = "abc";

    if (strlen(str2) - strlen(str1) > 0)    // size_t, unsigned int
        printf("str2 > str1\n");
    else
        printf("str2 < str1\n");

    return 0;
}