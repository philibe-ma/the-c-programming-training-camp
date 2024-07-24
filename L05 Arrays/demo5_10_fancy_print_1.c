
#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "welcome to the world of c programming";
    // char text[] = "abc";

    int len = strlen(text);

    for (int i = 0; i < (len+1)/2 + 1; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            printf("%c", text[j]);
        }
        for (int j = 0; j < len - 2*i; ++j)
        {
            printf("*");
        }
        if (i == (len+1)/2 && len % 2 == 1)
        {
            printf("\b");
        }
        for (int j = len - i; j < len; ++j)
        {
            printf("%c", text[j]);
        }
        printf("\n");
    }

    return 0;
}