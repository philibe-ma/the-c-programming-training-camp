#include <stdio.h>
#include <math.h>

int main()
{
    fabs(0.1 + 0.2 - 0.3) < 0.000001 ? printf("0.1 + 0.2 == 0.3\n")
                               : printf("0.1 + 0.2 != 0.3\n");

    return 0;
}