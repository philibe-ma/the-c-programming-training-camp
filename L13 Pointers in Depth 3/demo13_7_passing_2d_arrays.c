#include <stdio.h>

#define ROW 3
#define COL 5

// accepts an int pointer
void func1(int *ptr, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", *(ptr + i*col + j));
        printf("\n");
    }
}

// accepts a pointer array
void func2(int *ptr[], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", ptr[i][j]);
        printf("\n");
    }
}

// accepts an array pointer
void func3(int ptr[][COL], int row, int col)
// void func3(int (*ptr)[COL], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", ptr[i][j]);
        printf("\n");
    }
}

// accepts a pointer array pointer
void func4(int (*ptr[])[COL], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", (*ptr[i])[j]);
        printf("\n");
    }
}

int main()
{
    int arr[ROW][COL] = {1, 2, 3, 4, 5,
                         6, 7, 8, 9, 10,
                         11, 12, 13, 14, 15};

    func1(&arr[0][0], ROW, COL);
    printf("\n");

    int *p2[] = {arr[0], arr[1], arr[2]};
    func2(p2, ROW, COL);
    printf("\n");

    func3(arr, ROW, COL);
    printf("\n");

    int (*p4[])[COL] = {&arr[0], &arr[1], &arr[2]};
    func4(p4, ROW, COL);
    printf("\n");

    return 0;
}