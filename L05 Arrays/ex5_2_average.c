#include <stdio.h>

void print_array(int arr[10]);
void swap_array_elements(int a[10], int b[10]);


int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int i, c;

    printf("Array A: ");
    print_array(a);
    printf("Array B: ");
    print_array(b);


    swap_array_elements(a, b);

    printf("Array A: ");
    print_array(a);
    printf("Array B: ");
    print_array(b);
    
    return 0;
}


void print_array(int arr[10])
{
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}


void swap_array_elements(int a[10], int b[10])
{
    int i, c;
    for (i = 0; i < 10; ++i)
    {
        c = a[i];
        a[i] = b[i];
        b[i] = c;
    }
}