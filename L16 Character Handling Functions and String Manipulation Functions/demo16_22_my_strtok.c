#include <stdio.h>
#include <string.h>

int in_str(const ch, const char *str)
{
    while (*str)
    {
        if (*str == ch)
            return 1;
        ++str;
    }
    return 0;
}

char *my_strtok(const char *str, const char *delim)
{
    static char *flag = NULL;
    char *ret = NULL;

    if (str != NULL)
        flag = str;

    while (in_str(*flag, delim))
        ++flag;
    if (*flag == '\0')
        return NULL;
    ret = flag;

    while (*flag && in_str(*flag, delim) == 0)
        ++flag;
    *flag = '\0';
    ++flag;

    return ret;
}

int main()
{
    char str[] = "@..philibe.@sina.com";
    char delim[] = "@.";

    char str_copy[20] = "";
    strcpy(str_copy, str);
    for (char *token = my_strtok(str_copy, delim); token != NULL; token = my_strtok(NULL, delim))
    {
        printf("%s\n", token);
    }

    return 0;
}