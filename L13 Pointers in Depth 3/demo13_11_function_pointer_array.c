#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int a = 10;
    int b = 3;

    int (*pf[])(int, int) = {add, sub, mul, div, mod};

    for (int i = 0; i < 5; ++i)
    {
        // printf("%d\n", pf[i](a, b));
        printf("%d\n", (*pf[i])(a, b));
    }

    return 0;
}