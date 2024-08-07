#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;

    // const int *ptr = &a;
    // int *const ptr = &a;
    // const int *const ptr = &a;
    int *ptr = &a;
    *ptr = 20;
    printf("a = %d\n", a);

    ptr = &b;
    *ptr = 20;
    printf("b = %d\n", b);

    return 0;
}