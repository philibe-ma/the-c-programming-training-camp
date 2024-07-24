#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "welcome to the world of c programming";
    //char text[] = "abcd";

    int len = strlen(text);
    int left = -1;
    int right = len;

    while (left <= right)
    {
        for (int j = 0; j <= left; ++j)
        {
            printf("%c", text[j]);
        }
        for (int j = 0; j < right - left - 1; ++j)
        {
            printf("*");
        }
        if (left == right)
        {
            printf("\b");
        }
        for (int j = right; j < len; ++j)
        {
            printf("%c", text[j]);
        }
        printf("\n");

        ++left;
        --right;
    }

    return 0;
}