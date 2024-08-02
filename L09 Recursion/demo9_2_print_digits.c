#include <stdio.h>

void print_digits(int num)
{
    if (num <= 9)
        printf("%d\n", num);
    else
    {
        print_digits(num/10);
        printf("%d\n", num%10);
    }
}

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        print_digits(num);
    }

    return 0;
}