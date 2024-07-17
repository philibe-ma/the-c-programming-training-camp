#include <stdio.h>

int main()
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        if (a >= 140)
        {
            printf("Genius\n");
        }
    }

    return 0;
}