#include <stdio.h>

int factorial(int n)
{
    if (n <= 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        printf("factorial(%d) = %d\n", n, factorial(n));
    }

    return 0;
}