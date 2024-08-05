#include <stdio.h>

int main()
{
    int a = 0x11223344;
    printf("&a = %p, a = %d\n", &a, a);

    int *ptr = &a;
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);

    return 0;
}