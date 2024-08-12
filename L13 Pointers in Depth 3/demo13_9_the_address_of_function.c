#include <stdio.h>

void func()
{
    printf("This is a function.\n");
}

int main()
{
    printf("func = %p\n", func);
    printf("func + 1 = %p\n", func + 1);

    printf("&func = %p\n", &func);
    printf("&func + 1 = %p\n", &func + 1);

    return 0;
}