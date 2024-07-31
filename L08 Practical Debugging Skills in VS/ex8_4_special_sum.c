#include <stdio.h>
#include <math.h>

int special_sum(int a, int n)
{
    int i, j;
    int sum = 0;

    for (i = 0; i < n; ++i)
    {
        int t = 0;
        for (j = 0; j < i+1; ++j)
            t += a * pow(10, j);
        sum += t;
    }

    return sum;
}

int main()
{
    int a = 2;
    int n = 5;

    printf("sum = %d\n", special_sum(a, n));

    return 0;
}
