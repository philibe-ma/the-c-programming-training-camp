#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = 5;
    int find = -1;
    int len = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = len - 1;
    int mid = (left + right) / 2;

    while (left <= right)
    {
        if (arr[mid] == n)
        {
            find = mid;
            break;
        }
        else if (arr[mid] > n)
        {
            right = mid - 1;
        }
        else if (arr[mid] < n)
        {
            left = mid + 1;
        }

        mid = (left + right) / 2;
    }

    if (find != -1)
    {
        printf("arr[%d] = %d", find, arr[find]);
    }
    else
    {
        printf("%d not found", n);
    }

    return 0;
}