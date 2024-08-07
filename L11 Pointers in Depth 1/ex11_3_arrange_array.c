#include <stdio.h>

void print_array(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrange_array(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i]%2 == 0)
        {
            for (int j = i+1; j < len; ++j)
            {
                if (arr[j]%2 == 1)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }
}

int main()
{
    int arr[10] = {3, 4, 21, 43, 64, 62, 11, 7, 2, 9};
    print_array(arr, 10);

    arrange_array(arr, 10);
    print_array(arr, 10);

    return 0;
}