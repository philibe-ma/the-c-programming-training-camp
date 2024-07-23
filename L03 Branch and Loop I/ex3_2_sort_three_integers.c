#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int max = 0, mid = 0, min = 0;

    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    mid = a + b + c - max - min;

    printf("%d %d %d\n", max, mid, min);

    return 0;
}