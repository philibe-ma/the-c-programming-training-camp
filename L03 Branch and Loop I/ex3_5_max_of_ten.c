#include <stdio.h>

int main()
{
    int num[10] = {23, 2, 43, 65, 21, 75, 6, 86, 24, 7};
    int max = 0;
    int i;

    for (i = 0; i < 10; ++i)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("%d\n", max);

    return 0;
}