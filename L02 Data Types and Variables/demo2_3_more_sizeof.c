#include <stdio.h>

// the expression in sizeof() would not be evaluated
int main()
{
    short s = 5;
    int b = 10;

    printf("%zd\n", sizeof(s = b + 1)); // an int data is assigned to a short data
    printf("s = %d\n", s);  // the value of s is not changed

    return 0;
}