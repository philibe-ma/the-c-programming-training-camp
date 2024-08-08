#include <stdio.h>

void print_yanghui_triangle(int n)
{
    int triangle[n][n];
    int i, j;

    triangle[0][0] = 1;
    for (i = 1; i < n; ++i)
    {
        triangle[i][0] = triangle[i][i] = 1;
        for (j = 1; j < i; ++j)
        {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j <= i; ++j)
            printf("%2d ", triangle[i][j]);
        printf("\n");
    }
}

int main()
{
    int n;

    while (printf(">>> "), scanf("%d", &n) != EOF)
    {
        print_yanghui_triangle(n);
    }

    return 0;
}