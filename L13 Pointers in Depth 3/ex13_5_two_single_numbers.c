#include <stdio.h>

void search_single_number(int arr[], int len, int n)
{
    for (int i = 0; i < len; ++i)
    {
        int flag = 1;
        for (int j = 0; j < len; ++j)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d\n", arr[i]);
            --n;
        }
        if (n <= 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 6};
    int len = sizeof(arr) / sizeof(int);

    search_single_number(arr, len, 2);

    return 0;
}