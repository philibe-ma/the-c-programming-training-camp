#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world";
    printf("%s\n", str);
    memset(str, 'x', 6);
    printf("%s\n", str);

    return 0;
}