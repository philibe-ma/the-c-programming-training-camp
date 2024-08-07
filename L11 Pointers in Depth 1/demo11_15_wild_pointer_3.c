#include <stdio.h>

int *func()
{
    int a = 10;
    return &a;
}

int main()
{
    int *ptr = func();
    printf("%d\n", *ptr);

    return 0;
}