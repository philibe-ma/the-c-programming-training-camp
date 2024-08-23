#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {0};

    int num = 10;
    memcpy(arr2, arr1, num * sizeof(int));

    for (int i = 0; i < num; ++i)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}