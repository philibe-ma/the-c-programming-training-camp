#include <stdio.h>

int main()
{
    int i = 1;
    int r = (++i) + (++i) + (++i);

    printf("i = %d, r = %d\n", i, r);

    return 0;
}