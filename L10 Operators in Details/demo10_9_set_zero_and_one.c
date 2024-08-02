#include <stdio.h>

int main()
{
    int a = 13;

    a = a | (1 << 4);  // set 1 to the 5th digit r2l
    printf("%d\n", a);
    a = a & ~(1 << 4); // set 0 to the 5th digit r2l
    printf("%d\n", a);

    return 0;
}
