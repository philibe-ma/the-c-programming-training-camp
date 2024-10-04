#include <stdio.h>

struct
{
    char c;
    int i;
    double d;
} s;

int main()
{
    s.i = 10;
    printf("%d\n", s.i);

    return 0;
}