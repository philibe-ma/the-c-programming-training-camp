#include <stdio.h>

int main()
{
    printf("char: %zd\n", sizeof(char));
    printf("int: %zd\n", sizeof(int));
    printf("short: %zd\n", sizeof(short));
    printf("long: %zd\n", sizeof(long));
    printf("long long: %zd\n", sizeof(long long));
    printf("float: %zd\n", sizeof(float));
    printf("double: %zd\n", sizeof(double));
    printf("long double: %zd\n", sizeof(long double));
    printf("_Bool: %zd\n", sizeof(_Bool));
    
    return 0;
}