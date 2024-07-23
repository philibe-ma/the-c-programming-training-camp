#include <stdio.h>

void print_square(int a);
void print_repeated(char* s, int n);


int main()
{
    int a = 0;

    while (scanf("%d", &a) != EOF)
    {
        print_square(a);
    }

    return 0;
}


void print_square(int a)
{
    if (a == 1)
    {
        printf("*\n");
    }
    else if (a == 2)
    {
        printf("* *\n* *\n");
    }
    else if (a > 2)
    {
        print_repeated("* ", a - 1);
        printf("*\n");
        for (int i = 0; i < a - 2; ++i)
        {
            printf("* ");
            print_repeated("  ", a - 2);
            printf("*\n");
        }
        print_repeated("* ", a - 1);
        printf("*\n");
    }
}


void print_repeated(char* s, int n)
{
    for (; n > 0; --n)
    {
        printf(s);
    }
}