#include <stdio.h>
#include <string.h>

void rotate_str(char *str, int n)
{
    int len = strlen(str);
    char str_copy[len+1];
    strcpy(str_copy, str);

    int i;
    for (i = n%len; i < len; ++i)
    {
        *(str + i - n%len) = *(str_copy + i);
    }

    for (i = 0; i < n%len; ++i)
    {
        *(str + len - n%len + i) = *(str_copy + i);
    }
}

int is_rotation(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;
    else
    {
        char str_copy[len1+1];
        strcpy(str_copy, str1);
        for (int i = 0; i < len1; ++i)
        {
            rotate_str(str_copy, 1);
            if (strcmp(str_copy, str2) == 0)
                return 1;
        }
        return 0;
    }
}

int main()
{
    char str1[] = "abcdef";
    char str2[] = "defabc";
    printf("%d\n", is_rotation(str1, str2));


    return 0;
}