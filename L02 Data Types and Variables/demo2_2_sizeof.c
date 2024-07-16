#include <stdio.h>

int main()
{
    int a = 10;

    printf("%zd\n", sizeof(a));
    printf("%zd\n", sizeof a);
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(2 + 3.5));

    return 0;
}