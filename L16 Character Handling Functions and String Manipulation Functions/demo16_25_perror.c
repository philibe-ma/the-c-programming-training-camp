#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
    FILE *pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        perror("Failed to open the file");
        return 1;
    }

    // ...

    fclose(pf);
    pf = NULL;

    return 0;
}