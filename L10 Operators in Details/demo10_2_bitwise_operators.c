#include <stdio.h>

int main()
{
    int a = -5;
    int b = 13;

    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%d\n", ~a);
    printf("%d\n", ~b);

    return 0;
}
