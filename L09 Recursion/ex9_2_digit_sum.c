#include <stdio.h>

int digit_sum(int num)
{
    if (num <= 9)
        return num;
    else
        return digit_sum(num/10) + num%10;
}

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        printf("%d\n", digit_sum(num));
    }

    return 0;
}