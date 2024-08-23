#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "philibe@sina.com";
    char delim[] = "@.";

    char str_copy[20] = "";
    strcpy(str_copy, str);
    for (char *token = strtok(str_copy, delim); token != NULL; token = strtok(NULL, delim))
    {
        printf("%s\n", token);
    }

    return 0;
}