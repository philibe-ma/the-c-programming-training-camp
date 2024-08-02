#include <stdio.h>

int count_ones(int num)
{
    int count = 0;

    while (num)
    {
        num = num & (num-1);
        ++count;
    }

    return count;
}

int count_differ_digits(int a, int b)
{
    return count_ones(a ^ b);
}

int main()
{
    int a;
    int b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", count_differ_digits(a, b));
    }

    return 0;
}
