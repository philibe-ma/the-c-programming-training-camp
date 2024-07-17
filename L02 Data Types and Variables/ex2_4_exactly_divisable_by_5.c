#include <stdio.h>

int main()
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        if (a % 5 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}