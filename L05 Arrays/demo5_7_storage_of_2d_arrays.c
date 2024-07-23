#include <stdio.h>

int main()
{
    int arr[3][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i, j;

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            printf("&arr[%d][%d] = %p    arr[%d][%d] = %d\n", i, j, &arr[i][j], i, j, arr[i][j]);
        }
    }
    
    return 0;
}