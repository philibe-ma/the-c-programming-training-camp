#include <stdio.h>

void init_array(int arr[], int n);
void print_array(int arr[], int n);
void reverse_array(int arr[], int n);


int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    
    init_array(arr, n);
    printf("\ninitialized array:\n");
    print_array(arr, n);

    printf("\nset values:\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("\narray:\n");
    print_array(arr, n);

    reverse_array(arr, n);
    printf("\nreversed array:\n");
    print_array(arr, n);

    return 0;
}


void init_array(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        arr[i] = 0;
    }
}


void print_array(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}


void reverse_array(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n/2; ++i)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}