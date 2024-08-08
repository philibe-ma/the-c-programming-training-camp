#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int arr3[] = {11, 12, 13, 14, 15};
    int *parr[3] = {arr1, arr2, arr3};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            printf("%2d ", parr[i][j]);
            // printf("%2d ", *(*(parr + i) + j));
            // printf("%2d ", (*(parr+i))[j]);
            // printf("%2d ", *(parr[i] +j));
        }
        printf("\n");
    }

    return 0;
}