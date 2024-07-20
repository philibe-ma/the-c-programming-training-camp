#include <stdio.h>

int main()
{
    printf("1\n");
    goto next;
    printf("2\n");

next:
    printf("3\n");

    return 0;
}