#include <stdio.h>

void func(int arr[])
// void func(int arr[10])
// void func(int *arr)
{
    printf("\ninside the function:\n");
    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
    printf("arr = %p\n", arr);
    printf("arr + 1 = %p\n", arr + 1);
    printf("sizeof(arr) = %zd\n", sizeof(arr));
    printf("&arr = %p\n", &arr);
    printf("&arr + 1 = %p\n", &arr + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
    printf("arr = %p\n", arr);
    printf("arr + 1 = %p\n", arr + 1);
    printf("sizeof(arr) = %zd\n", sizeof(arr));
    printf("&arr = %p\n", &arr);
    printf("&arr + 1 = %p\n", &arr + 1);

    func(arr);

    return 0;
}