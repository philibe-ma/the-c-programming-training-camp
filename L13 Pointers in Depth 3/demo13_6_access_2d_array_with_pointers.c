#include <stdio.h>

#define ROW 3
#define COL 5

int main()
{
    int arr[ROW][COL] = {1, 2, 3, 4, 5,
                         6, 7, 8, 9, 10,
                         11, 12, 13, 14, 15};

    // access target                     
    int i = 1;
    int j = 2;

    // int pointer
    int *p1 = &arr[0][0];
    printf("arr[%d][%d] = %d\n", i, j, *(p1 + i*COL + j));

    // pointer array
    int *p2[] = {arr[0], arr[1], arr[2]};
    printf("arr[%d][%d] = %d\n", i, j, p2[i][j]);

    // array pointer
    int (*p3)[COL] = arr;
    printf("arr[%d][%d] = %d\n", i, j, p3[i][j]);

    // array pinter array
    int (*p4[])[COL] = {&arr[0], &arr[1], &arr[2]};
    printf("arr[%d][%d] = %d\n", i, j, (*p4[i])[j]);

    return 0;
}