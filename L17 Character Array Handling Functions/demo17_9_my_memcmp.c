#include <stdio.h>

int my_memcmp(const void *lhs, const void *rhs, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        if (*(char *)lhs - *(char *)rhs < 0)
            return -1;
        else if (*(char *)lhs - *(char *)rhs > 0)
            return 1;
        lhs = (char *)lhs -1;
        rhs = (char *)rhs -1;
    }
    return 0;
}

void compare_str(const char *lhs, const char *rhs, size_t count)
{
    for (int i = 0; i < count; ++i)
        putchar(lhs[i]);

    int rc = my_memcmp(lhs, rhs, count);
    const char *rel = rc < 0 ? " precedes "
                             : rc > 0 ? " follows "
                                      : " compares equal to ";
    printf("%s", rel);

    for (int i = 0; i < count; ++i)
        putchar(rhs[i]);

    printf(" in lexicographical order\n");
}

int main()
{
    char str1[] = "abc";
    char str2[] = "abd";

    compare_str(str1, str2, sizeof(str1));
    compare_str(str2, str1, sizeof(str1));
    compare_str(str1, str1, sizeof(str1));

    return 0;
}