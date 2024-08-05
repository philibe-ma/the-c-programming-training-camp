#include <stdio.h>

int main()
{
    char a = 5;      
    char b = 126;   
    char c = a + b;

    // the calculation process
    // promotion of a: 00000101 -> 00000000 00000000 00000000 00000101
    // promotion of b: 01111110 -> 00000000 00000000 00000000 01111110
    // addition:                   00000000 00000000 00000000 10000011
    // trunction to char:                                     10000011

    printf("dec: %d\nch: %c\n", c, c);

    return 0;
}