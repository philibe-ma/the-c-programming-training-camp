#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int len = sizeof(arr) / sizeof(int);
    int *ptr = arr;
    while (ptr < &arr[len])
    {
        printf("%d ", *ptr);
        ++ptr;
    }

    return 0;
}