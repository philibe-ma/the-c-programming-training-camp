#include <stdio.h>

int i;  // global variable without initialization would be set to 0 by default

int main()
{
    --i;    // -1

    // the type of sizeof() is unsigned int
    // the type of i is (signed) int
    if (i > sizeof(i))
        printf(">\n");
    else
        printf("<\n");

    return 0;
}