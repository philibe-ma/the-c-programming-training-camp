#include <stdio.h>

void func(char *s)
{
    printf("the pointer:\n");
    printf("s = %p\n", s);
    printf("&s = %p\n", &s);
}

int main()
{
    char s[] = "hello world";
    printf("string name:\n");
    printf("&s[0] = %p\n", &s[0]);
    printf("s = %p\n", s);
    printf("&s = %p\n", &s);

    func(s);

    return 0;
}