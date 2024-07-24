#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = 17;
    int find = -1;
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < len; ++i)
    {
        if (arr[i] == n)
        {
            find = i;
            break;
        }
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