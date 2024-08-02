#include <stdio.h>

// CAUTION: only applies to positive integers
int count_ones(int num)
{
    int count = 0;

    while (num)
    {
        if (num%2 == 1)
            ++count;
        num /= 2;
    }

    return count;
}

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        printf("%d\n", count_ones(num));
    }

    return 0;
}
