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

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        printf("%d\n", count_ones(num));
    }

    return 0;
}
