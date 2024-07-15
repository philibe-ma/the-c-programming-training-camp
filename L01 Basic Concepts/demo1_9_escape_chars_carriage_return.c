#include <stdio.h>

// escape character \r
int main()
{
    printf("%d\n", '\r');
    printf("abcde\n");
    printf("abc\rde\n");
    printf("abcde\r");
    getchar();
    
    return 0;
}