#include <stdio.h>

int main()
{
    {
        int a = 10;
    }
    printf("%d\n", a);  // error: 'a' undeclared (first use in this function)

    return 0;
}