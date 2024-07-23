#include <stdio.h>

int main()
{
    int i;
    int sign = 1;
    float sum = 0.0;

    for (i = 1; i <= 100; ++i)
    {
        if (i % 2 == 1)
        {
            sign = 1;
        }
        else
        {
            sign = -1;
        }
        sum += sign * 1.0 / i;
    }

    printf("sum = %f\n", sum);

    return 0;
}