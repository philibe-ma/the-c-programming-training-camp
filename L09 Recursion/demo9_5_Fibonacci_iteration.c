#include <stdio.h>

int Fib(int n)
{
    int a = 0;
    int b = 1;
    int c = a + b;

    for (int i = 1; i < n; ++i)
    {
        a = b;
        b = c;
        c = a + b;
    }

    return b;
}

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d ", Fib(i));
    }

    return 0;
}