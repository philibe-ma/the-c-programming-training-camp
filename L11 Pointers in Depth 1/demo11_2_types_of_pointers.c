#include <stdio.h>

int main()
{
    int a = 0x11223344;
    int b = 0x11223344;

    int *ptr_a = &a;
    *ptr_a = 0;
    printf("a = 0x%08x\n", a);

    // char *ptr_b = &b;
    char *ptr_b = (char *)&b;
    *ptr_b = 0;
    printf("b = 0x%08x\n", b);

    return 0;
}