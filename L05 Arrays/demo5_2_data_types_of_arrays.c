#include <stdio.h>

int main()
{
    printf("%zd\n", sizeof(int [5]));
    printf("%zd\n", sizeof(int [10]));
    printf("%zd\n", sizeof(float [10]));
    printf("%zd\n", sizeof(char [10]));

    return 0;
}