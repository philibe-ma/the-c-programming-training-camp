#include <stdio.h>

// input:   an integer
// output:  digits of the integer from the lowest to the highest
int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n)
    {
        printf("%d ", n % 10);
        n /= 10;
    }
    putchar('\n');

    return 0;
}