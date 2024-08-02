#include <stdio.h>

int count_ones(int num)
{
    int count = 0;

    for (int i = 0; i < 32; ++i)
    {
        if (num & (1 << i))
            ++count;
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
