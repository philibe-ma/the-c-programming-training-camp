#include <stdio.h>

struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
} *p = (struct Test *)0x100000;

int main()
{
    // printf("sizeof(struct Test) = %zd\n", sizeof(struct Test));
    // printf("sizeof(unsigned long) = %zd\n", sizeof(unsigned long));
    // printf("sizeof(unsigned int) = %zd\n", sizeof(unsigned int));

    printf("p = 0x%p\n", p);
    printf("p + 0x1 = 0x%p\n", p + 0x1);
    printf("(unsigned long)p + 0x1 = 0x%p\n", (unsigned long)p + 0x1);
    printf("(unsigned int *)p + 0x1 = 0x%p\n", (unsigned int *)p + 0x1);
    
    return 0;
}