#include <stdio.h>

int main()
{
    for (char killer = 'A'; killer <= 'D'; ++killer)
    {
        if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
        {
            printf("%c is the killer.\n", killer);
        }
    }

    return 0;
}