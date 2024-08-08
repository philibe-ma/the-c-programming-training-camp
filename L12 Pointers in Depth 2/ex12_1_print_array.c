#include <stdio.h>

void print_array(int *arr, int len)
{
    for (int i = 0; i < len; ++i)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(int);

    print_array(arr, len);

    return 0;
}