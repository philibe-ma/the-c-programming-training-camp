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
    int i, j, temp;
    
    for (i = 0; i < m; ++i)
    {
        carr[i] = arr1[i];
    }
    for (i = 0; i < n; ++i)
    {
        carr[i + m] = arr2[i];
    }

    for (i = 0; i < m+n; ++i)
    {
        for (j = i+1; j < m+n; ++j)
        {
            if (carr[i] > carr[j])
            {
                temp = carr[i];
                carr[i] = carr[j];
                carr[j] = temp;
            }
        }
    }
}