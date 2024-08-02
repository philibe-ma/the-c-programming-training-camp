#include <stdio.h>

// CAUTION: error might occur if a or b is too large
int main()
{
    int a = 10;
    int b = 20;

    printf("before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf(" after swap: a = %d, b = %d\n", a, b);

    return 0;
}
