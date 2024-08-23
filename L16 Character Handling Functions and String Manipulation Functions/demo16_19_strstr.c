#include <stdio.h>
#include <string.h>

void find_str(const char *str, const char *substr)
{
    char *pos = strstr(str, substr);
    pos ? printf("the string \"%s\" is found in \"%s\" at position %d\n",
                 substr, str, pos - str)
        : printf("the string \"%s\" is not found in \"%s\"\n",
                 substr, str);
}

int main()
{
    char str[] = "one two three";

    find_str(str, "two");
    find_str(str, "");
    find_str(str, "four");
    find_str(str, "e");

    return 0;
}