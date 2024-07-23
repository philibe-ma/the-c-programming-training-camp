#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER 100  // included
#define UPPER 200  // included

int main() {
    srand((unsigned int)time(NULL));

    printf("%d\n", rand() % (UPPER - LOWER + 1) + LOWER);
    printf("%d\n", rand() % (UPPER - LOWER + 1) + LOWER);
    printf("%d\n", rand() % (UPPER - LOWER + 1) + LOWER);
    printf("%d\n", rand() % (UPPER - LOWER + 1) + LOWER);
    printf("%d\n", rand() % (UPPER - LOWER + 1) + LOWER);

    return 0;
}