#include <stdio.h>

// accepts an int pointer
void func1(int row, int col, int *ptr)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", *(ptr + i*col + j));
        printf("\n");
    }
}

// accepts a pointer array
void func2(int row, int col, int *ptr[])
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", ptr[i][j]);
        printf("\n");
    }
}

// accepts an array pointer
void func3(int row, int col, int ptr[][col])
// void func3(int (*ptr)[col], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%2d ", ptr[i][j]);
        printf("\n");
    }
}

// accepts a pointer array pointer
void func4(int row, int col, int (*ptr[])[col])
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
    int row = 3;
    int col = 5;

    int arr[row][col];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            arr[i][j] = i*col + j + 1;
    }

    func1(row, col, &arr[0][0]);
    printf("\n");

    int *p2[] = {arr[0], arr[1], arr[2]};
    func2(row, col, p2);
    printf("\n");

    func3(row, col, arr);
    printf("\n");

    int (*p4[])[col] = {&arr[0], &arr[1], &arr[2]};
    func4(row, col, p4);
    printf("\n");

    return 0;
}