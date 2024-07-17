#include <stdio.h>

int main()
{
    int len = 0;
    int i;

    while (scanf("%d", &len) != EOF)
    {
        if (len > 0)
        {
            for (i = 0; i < len; ++i)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}