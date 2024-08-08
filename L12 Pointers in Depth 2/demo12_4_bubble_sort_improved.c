#include <stdio.h>

void bubble_sort_array(int arr[], int len)
{
    for (int i = 0; i < len-1; ++i)
    {
        int flag = 1;
        for (int j = 0; j < len-1-i; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }
        if (flag = 1)
            break;
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
    // int arr[] = {34, 22, 13, 64, 2, 43, 63, 3, 54, 1};
    int arr[] = {1, 2, 3, 4, 5 , 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(int);
    print_array(arr, len);

    bubble_sort_array(arr, len);
    print_array(arr, len);

    return 0;
}