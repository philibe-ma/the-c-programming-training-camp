#include <stdio.h>

// CAUTION: don't run this program unless you fully understand it
// the misuse of continue would cause the program fall into an infinite loop
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
        ++i;
    }

    return 0;
}