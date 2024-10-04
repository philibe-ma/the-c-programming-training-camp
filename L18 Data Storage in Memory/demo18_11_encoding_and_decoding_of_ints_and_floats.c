#include <stdio.h>

int main()
{
    int n = 9;
    printf("n = %d\n", n);
    printf("n = %f (read as float)\n", *(float *)&n);

    float x = 9.0;
    printf("x = %f\n", x);
    printf("x = %d (read as int)\n", *(int *)&x);

    return 0;
}