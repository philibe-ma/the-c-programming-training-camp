#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%zd\n", sizeof(arr));
    printf("%zd\n", sizeof(arr[0]));
    printf("%d\n", sizeof(arr)/sizeof(arr[0]));

    return 0;
}