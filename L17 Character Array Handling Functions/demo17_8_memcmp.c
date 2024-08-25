#include <stdio.h>
#include <string.h>

void compare_str(const char *lhs, const char *rhs, size_t count)
{
    for (int i = 0; i < count; ++i)
        putchar(lhs[i]);

    int rc = memcmp(lhs, rhs, count);
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