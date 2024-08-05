#include <stdio.h>
#include <string.h>

void left_rotate(char *s, int n)
{
    int len = strlen(s);
    char s_copy[len+1];
    strcpy(s_copy, s);

    int i;

    for (i = n%len; i < len; ++i)
    {
        *(s + i - n%len) = *(s_copy + i);
    }

    for (i = 0; i < n%len; ++i)
    {
        *(s + len - n%len + i) = *(s_copy + i);
    }
}

int main()
{
    char s[] = "ABCDEFG";
    printf("%s\n", s);

    left_rotate(s, 10);
    printf("%s\n", s);

    return 0;
}