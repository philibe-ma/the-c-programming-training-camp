#include <stdio.h>

int main()
{
    int a = 0;
    a = 10;
    printf("a = %d\n", a);

    const int b = 0;
    // b = 10;     // error
    int *ptr = &b; // warning
    *ptr = 10;
    printf("b = %d\n", b);

    return 0;
}