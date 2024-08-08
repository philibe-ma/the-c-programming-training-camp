#include <stdio.h>

void bubble_sort_array(int arr[], int len)
{
    for (int i = 0; i < len-1; ++i)
    {
        for (int j = 0; j < len-1-i; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {34, 22, 13, 64, 2, 43, 63, 3, 54, 1};
    int len = sizeof(arr) / sizeof(int);
    print_array(arr, len);

    bubble_sort_array(arr, len);
    print_array(arr, len);

    return 0;
}