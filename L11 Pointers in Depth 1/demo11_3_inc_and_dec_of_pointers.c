#include <stdio.h>

int main()
{
    int    a = 0x11223344;
    int  *pn = &a;
    // char *pc = &a;
    char *pc = (char *)&a;

    printf("&a = %p\n", &a);
    printf("pn = %p\n", pn);
    printf("pc = %p\n", pc);

    printf("pn + 1 = %p\n", pn + 1);
    printf("pc + 1 = %p\n", pc + 1);

    return 0;
}