#include <stdio.h>


int main()
{
    int a = 1;
    int b = 2;
    int c = (a > b, a = b + 10, b = a + 1);
    // int c =  a > b, a = b + 10, b = a + 1;  // error: redefinition of a and b 

    printf("%d\n", c);

    return 0;
}
