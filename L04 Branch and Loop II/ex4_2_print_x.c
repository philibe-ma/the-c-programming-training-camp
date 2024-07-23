#include <stdio.h>

void print_x(int n);
void print_repeated(char* s, int n);


int main() {
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        print_x(n);
    }

    return 0;
}


void print_x(int n)
{
    int i;
    for (i = n; i > 0; i = i -2)
    {
        print_repeated(" ", (n-i)/2);
        printf("*");
        print_repeated(" ", i-2);
        if (i - 2 >= 0)
        {
            printf("*");
        }
        print_repeated(" ", (n-i)/2);
        putchar('\n');
    }
    if (i == 0)
    {
        i = 2;
    }
    else if (i == -1)
    {
        i = 3;
    }
    for (; i <= n; i = i + 2)
    {
        print_repeated(" ", (n-i)/2);
        printf("*");
        print_repeated(" ", i-2);
        printf("*");
        print_repeated(" ", (n-i)/2);
        putchar('\n');
    }
}


void print_repeated(char* s, int n)
{
    for (; n > 0; --n)
    {
        printf(s);
    }
}