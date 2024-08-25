#include <stdio.h>

void check_endianness()
{
    int x = 1;
    *(char *)&x ? printf("little endian\n")
                : printf("big endian\n");
}

int main()
{
    check_endianness();

    return 0;
}