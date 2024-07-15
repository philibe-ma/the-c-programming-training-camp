#include <stdio.h>

// escape characters \ooo and \xhh
int main()
{
    printf("%c\n", '\115');
    printf("%c\n", '\x4a');
    
    return 0;
}