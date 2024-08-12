#include <stdio.h>

void func1()
{
    printf("This is a function.\n");
}

int func2(int a, int b)
{
    return a + b;
}

int main()
{
    void (*pf1)() = func1;
    void (*pf2)() = &func1;

    pf1();
    (*pf1)();
    pf2();
    (*pf2)();

    int (*pf3)() = func2;
    int (*pf4)(int, int) = func2;
    int (*pf5)(int a, int b) = func2;

    printf("%d\n", pf3(1, 2));
    printf("%d\n", pf4(1, 2));
    printf("%d\n", pf5(1, 2));

    return 0;
}