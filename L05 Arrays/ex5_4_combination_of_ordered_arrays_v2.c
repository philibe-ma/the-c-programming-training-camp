#include <stdio.h>

void print_array(int arr[], int n);
void combine_arrays(int arr1[], int m, int arr2[], int n, int carr[]);

int main()
{
    int m = 0, n =0;
    scanf("%d %d", &m, &n);
    int arr1[m], arr2[n];
    int carr[m+n];  // the combined array
    int i;

    for (i = 0; i < m; ++i)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr2[i]);
    }

    printf("array 1: ");
    print_array(arr1, m);
    printf("array 2: ");
    print_array(arr2, n);

    combine_arrays(arr1, m, arr2, n, carr);

    printf("array combined: ");
    print_array(carr, m+n);

    return 0;
}


void print_array(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void combine_arrays(int arr1[], int m, int arr2[], int n, int carr[])
{
    int i = 0, j = 0;
    int k;

    for (k = 0; k < m+n; ++k)
    {
        if (i < m && j < n)
        {
            if (arr1[i] < arr2[j])
            {
                carr[k] = arr1[i];
                ++i;
            }
            else
            {
                carr[k] = arr2[j];
                ++j;
            }
        }
        else if (i >= m)
        {
            carr[k] = arr2[j];
            ++j;
        }
        else if (j >= n)
        {
            carr[k] = arr1[i];
            ++i;
        }
    }
}