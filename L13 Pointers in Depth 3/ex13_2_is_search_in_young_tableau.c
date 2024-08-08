#include <stdio.h>

int search_num(int rows, int cols, int arr[cols][rows], int num)
{
    int i, j;
    for (i = 0; i < rows; ++i)
    {
        if (arr[i][cols-1] < num)
            continue;
        else
        {
            for (j = 0; j < cols; ++j)
            {
                if (arr[i][j] == num)
                    return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int arr[3][3] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    int num = 7;
    // int num = 10;
    // int num = 4;
    printf("%d\n", search_num(3, 3, arr, num));

    return 0;
}