#include <stdio.h>

// escape character \b
int main()
{
    printf("%d\n", '\b');
    printf("abcde\n");
    printf("abc\bde\n");
    printf("abcde\b\b");
    getchar();
    
    return 0;
}