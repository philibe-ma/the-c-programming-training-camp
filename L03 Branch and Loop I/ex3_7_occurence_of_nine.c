#include <stdio.h>

int count_nine(int num);

int main()
{
    int i;
    int count = 0;

    for (i = 1; i <= 100; ++i)
    {

        count += count_nine(i);
    }

    printf("%d\n", count);

    return 0;
}

int count_nine(int num)
{
    int count = 0;
    while (num)
    {
        if (num % 10 == 9)
        {
            ++count;
        }
        num /= 10;
    }

    return count;
}