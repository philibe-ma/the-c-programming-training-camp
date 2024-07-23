#include <stdio.h>

int main()
{
    int arr[3][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    
    printf("%zd\n", sizeof(arr));
    printf("%zd\n", sizeof(arr[0]));
    printf("%zd\n", sizeof(arr[0][0]));

    printf("%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("%d\n", sizeof(arr) / sizeof(arr[0][0]));
    
    return 0;
}