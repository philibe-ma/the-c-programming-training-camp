#include <stdio.h>

int factorial(int n)
{
    if (n <= 0)
        return 1;
    else
    {
        int r = 1;
        for (int i = 1; i <= n; ++i)
            r *= i;
        return r;
    }
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