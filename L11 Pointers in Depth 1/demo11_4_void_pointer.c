#include <stdio.h>

int main()
{
    int a = 10;

    void *ptr = &a;
    *(int *)ptr = 20;
    printf("a = %d\n", a);

    return 0;
}