#include <stdio.h>

int bin_search(int arr[], int len, int value);


int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int value;
    scanf("%d", &value);
    int index;

    if ((index = bin_search(arr, len, value)) != -1)
    {
        printf("arr[%d] = %d", index, arr[index]);
    }
    else
    {
        printf("%d not found", value);
    }

    return 0;
}


int bin_search(int arr[], int len, int value)
{
    int left = 0;
    int right = len - 1;
    int mid = (right - left) / 2 + left;

    while (left <= right)
    {
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] > value)
        {
            right = mid - 1;
        }
        else if (arr[mid] < value)
        {
            left = mid + 1;
        }

        mid = (right - left) / 2 + left;
    }

    return -1;
}