#include <stdio.h>

// b % c = b - b / c
int main()
{
    printf("%d\n", 10 % 3);
    printf("%d\n", 10 % -3);
    printf("%d\n", -10 % 3);
    printf("%d\n", -10 % -3);

    printf("%d\n", 7 % 2);
    printf("%d\n", 7 % -2);
    printf("%d\n", -7 % 2);
    printf("%d\n", -7 % -2);

    return 0;
}