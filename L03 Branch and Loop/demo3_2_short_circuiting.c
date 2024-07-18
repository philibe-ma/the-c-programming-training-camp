#include <stdio.h>

int main()
{
    int i = 0;
    int a = 0;
    int b = 2;
    int c = 3;
    int d = 4;

    i = a++ && ++b && d++;
    // i = a++ || ++b || d++;

    printf("i = %d\n", i);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}