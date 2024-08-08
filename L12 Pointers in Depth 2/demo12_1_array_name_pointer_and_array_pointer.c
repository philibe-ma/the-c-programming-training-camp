#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("&arr[0] = %p\n", &arr[0]);

    int *ptr1 = arr;    // int pointer
    printf("ptr1 = %p\n", ptr1);
    printf("ptr1 + 1 = %p\n", ptr1 + 1);
    printf("%d\n", (int)(ptr1+1) - (int)ptr1);

    int (*ptr2)[10] = &arr; // int array pointer
    printf("ptr2 = %p\n", ptr2);
    printf("ptr2 + 1 = %p\n", ptr2 + 1);
    printf("%d\n", (int)(ptr2+1) - (int)ptr2);

    return 0;
}