#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(int);
    int *ptr = &arr[0];

    for (int i = 0; i < len; ++i)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}