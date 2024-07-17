#include <stdio.h>

int main()
{
    int a, b;
    int q, r;

    scanf("%d %d", &a, &b);

    q = a / b;
    r = a % b;

    printf("%d %d\n", q, r);

    return 0;
}