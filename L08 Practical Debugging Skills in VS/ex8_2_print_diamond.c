#include <stdio.h>

void print_diamond(int n)
{
    int i, j;

    for (i = (n-1)/2; i >= 0; --i)
    {
        for (j = 0; j < i; ++j)
            printf(" ");
        for (j = 0; j < n - 2*i; ++j)
            printf("*");
        for (j = 0; j < i; ++j)
            printf(" ");
        printf("\n");
    }

    for (i = 1; i <= (n-1)/2; ++i)
    {
        for (j = 0; j < i; ++j)
            printf(" ");
        for (j = 0; j < n - 2*i; ++j)
            printf("*");
        for (j = 0; j < i; ++j)
            printf(" ");
        printf("\n");
    }
}

int main()
{
    int num = 11;

    print_diamond(num);

    return 0;
}
