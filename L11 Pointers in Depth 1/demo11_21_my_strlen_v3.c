#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char *str)
{
    assert(str != NULL);
    int count = 0;
    while (*str)
    {
        ++count;
        ++str;
    }
    return count;
}

int main()
{
    char arr[] = "abcdefg";
    printf("%zd\n", my_strlen(arr));

    return 0;
}