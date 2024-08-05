#include <stdio.h>

int func()
{
    static int count = 1;
    return ++count;
}

int main()
{
    int r;
    r = func() + func() + func();
    printf("r = %d\n", r);

    return 0;
}