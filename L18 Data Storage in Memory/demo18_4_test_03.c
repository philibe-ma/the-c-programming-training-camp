#include <stdio.h>

int main()
{
    char str[1000];
    for (int i = 0; i < 1000; i++)
    {
        str[i] = -1 - i;
    }

    printf("%d\n", strlen(str));

    return 0;
}