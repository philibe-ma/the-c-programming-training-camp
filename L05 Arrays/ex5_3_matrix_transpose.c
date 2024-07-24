#include <stdio.h>

void transpose(int* mat, int row, int col, int* mat_t);


int main()
{
    int m = 0;  // rows, range 1-10
    int n = 0;  // cols, range 1-10
    scanf("%d %d", &m, &n);
    int mat[m][n];      // variable-length array
    int mat_t[n][m];    // transposed matrix
    int i, j;

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nThe original matrix:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    transpose(&mat[0][0], m, n, &mat_t[0][0]);

    printf("\nThe transposed matrix:\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            printf("%2d ", mat_t[i][j]);
        }
        printf("\n");
    }

    return 0;
}


void transpose(int* mat, int row, int col, int* mat_t)
{
    int s = 0;
    int t = 0;
    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            s = i * row + j;
            t = j * col + i;
            *(mat_t + s) = *(mat + t);
        }
    }
}