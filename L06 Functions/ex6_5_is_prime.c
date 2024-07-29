#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main()
{
    int lower = 100;
    int upper = 200;

    for (int i = lower; i <= upper; ++i)
    {
        if (is_prime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int is_prime(int n)
{
    int flag = 1;
    for (int i = 2; i < sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}