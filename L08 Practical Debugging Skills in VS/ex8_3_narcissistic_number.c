#include <stdio.h>
#include <math.h>

int is_narcissistic(int num)
{
    int n = num;
    int ndigits = 0;
    int r = 0;

    do
    {
        ++ndigits;
        n /= 10;
    } while (n > 0);

    n = num;
    while (n > 0)
    {
        r += pow(n%10, ndigits);
        n /= 10;
    }

    if (r == num)
        return 1;
    else
        return 0;
}

int main()
{
    int lower = 0;
    int upper = 100000;
    int i;

    for (i = lower; i <= upper; ++i)
    {
        if (is_narcissistic(i))
            printf("%d\n", i);
    }

    return 0;
}
