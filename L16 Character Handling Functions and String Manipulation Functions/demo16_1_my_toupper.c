#include <stdio.h>
#include <ctype.h>

int my_toupper(int ch)
{
    if (islower(ch))
    // if (ch >= 97 && ch <= 122)  // alternative
        return ch - 32;
    else
        return ch;
}

int main()
{
    char s[] = "So long, and thanks for all the fish.";

    for (int i = 0; s[i]; ++i)
    {
        s[i] = my_toupper(s[i]);
    }
    printf("%s\n", s);

    return 0;
}