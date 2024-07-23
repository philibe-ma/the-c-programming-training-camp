#include <stdio.h>

// notice the ++i would still be executed when the loop continued
int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}