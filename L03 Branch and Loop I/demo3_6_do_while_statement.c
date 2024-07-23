#include <stdio.h>

// input:   an integer
// output:  number of digits of the intger
// 0 shoude be counted as having 1 digit
int main()
{
    int n = 0;
    int len = 0;
    scanf("%d", &n);
    do
    {
        ++len;
        n /= 10;
    } while (n);
    printf("%d\n", len);
    
    return 0;
}