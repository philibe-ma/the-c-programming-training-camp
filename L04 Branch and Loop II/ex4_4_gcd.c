#include <stdio.h>

int get_gcd(int a, int b);


int main()
{
    int a, b;
    int gcd;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        gcd = get_gcd(a, b);
        printf("%d\n", gcd);
    }

    return 0;
}


int get_gcd(int a, int b)
{
    int min, i;
    int gcd = 1;

    min = a < b ? a : b;
    for (i = 2; i <= min; ++i)
    {
        if (a % i == 0 && b % i ==0 && i > gcd)
        {
            gcd = i;
        }
    }

    return gcd;
}