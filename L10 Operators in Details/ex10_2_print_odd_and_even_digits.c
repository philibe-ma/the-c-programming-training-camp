#include <stdio.h>

void print_odd_and_even_digits(int num)
{
    int i;

    printf(" odd digits: ");
    for (i = 31; i >= 1; i = i -2)
        printf("%d ", (num>>(i-1)) & 1);
    printf("\n");

    printf("even digits: ");
    for (i = 32; i >= 2; i = i -2)
        printf("%d ", (num>>(i-1)) & 1);
    printf("\n");
}

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        print_odd_and_even_digits(num);
    }

    return 0;
}
