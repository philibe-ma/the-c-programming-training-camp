#include <stdio.h>

// the result of dividing is rounded toward 0
int main()
{
    printf("%d\n", 10 / 3);
    printf("%d\n", 10 / -3);
    printf("%d\n", -10 / 3);
    printf("%d\n", -10 / -3);

    printf("%d\n", 7 / 2);
    printf("%d\n", 7 / -2);
    printf("%d\n", -7 / 2);
    printf("%d\n", -7 / -2);

    return 0;
}