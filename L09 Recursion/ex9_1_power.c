#include <stdio.h>

int power(int n, int k)
{
    if (n == 0)
        return 0;
    else if (k == 0)
        return 1;
    else if (k == 1)
        return n;
    else
        return n * power(n, k-1);
}

int main()
{
    int n, k;

    while (scanf("%d %d", &n, &k) != EOF)
    {
        printf("power(%d, %d) = %d\n", n, k, power(n, k));
    }

    return 0;
}