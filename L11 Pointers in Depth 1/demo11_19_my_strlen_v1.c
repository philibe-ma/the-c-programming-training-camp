#include <stdio.h>

int my_strlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        ++count;
        ++str;
    }
    return count;
}

int main()
{
    char arr[] = "abcdefg";
    printf("%d\n", my_strlen(arr));

    return 0;
}