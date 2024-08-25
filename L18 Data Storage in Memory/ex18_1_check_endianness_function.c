#include <stdio.h>

int check_endianness()
{
    int x = 1;
    if (*(char *)&x)
        return 1;
    else
        return 0;
}

int main()
{
    check_endianness() ? printf("little endian\n")
                       : printf("big endian\n");

    return 0;
}