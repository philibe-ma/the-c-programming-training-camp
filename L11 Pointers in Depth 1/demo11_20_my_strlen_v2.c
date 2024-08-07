#include <stdio.h>

int my_strlen(char *str)
{
    char *start = str;
    while (*str != '\0')
        ++str;
    return str - start;
}

int main()
{
    char arr[] = "abcdefg";
    printf("%d\n", my_strlen(arr));

    return 0;
}