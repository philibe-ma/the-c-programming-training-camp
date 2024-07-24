#include <stdio.h>

void print_mul_table(int n);


int main()
{
    int n = 1;
    scanf("%d", &n);

    print_mul_table(n);

    return 0;
}


void print_mul_table(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%02d * %02d = %03d  ", j, i, j*i);
        }
        printf("\n");
    }
}