#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
    FILE *pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        printf("Failed to open the file: %s\n", strerror(errno));
        return 1;
    }

    // ...

    fclose(pf);
    pf = NULL;

    return 0;
}