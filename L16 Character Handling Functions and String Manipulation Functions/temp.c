#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num = 5;
    memcpy(arr+2, arr, num * sizeof(int));

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}