#include <stdio.h>

int main()
{
    int arr[3][5] = {1, 2, 3, 4, 5,
                     6, 7, 7, 9, 10,
                     11, 12, 13, 14, 15};
    
    printf("arr[1][2] = %d\n\n", arr[1][2]);

    printf("&arr[0][0] = %p\n", &arr[0][0]);
    printf("&arr[0][0] + 1 = %p\n", &arr[0][0] + 1);
    printf("&arr[1][0] = %p\n", &arr[1][0]);
    printf("&arr[1][0] + 1 = %p\n", &arr[1][0] + 1);
    printf("&arr[2][0] = %p\n", &arr[2][0]);
    printf("&arr[2][0] + 1 = %p\n\n", &arr[2][0] + 1);

    printf("arr = %p\n", arr);
    printf("arr + 1 = %p\n", arr + 1);
    printf("%d\n\n", (int)(arr + 1) - (int)arr);

    printf("&arr = %p\n", &arr);
    printf("&arr + 1 = %p\n", &arr + 1);
    printf("sizeof(arr) = %zd\n\n", sizeof(arr));

    printf("arr[0] = %p\n", arr[0]);
    printf("arr[0] + 1 = %p\n", arr[0] + 1);
    printf("arr[1] = %p\n", arr[1]);
    printf("arr[1] + 1 = %p\n", arr[1] + 1);
    printf("arr[2] = %p\n", arr[2]);
    printf("arr[2] + 1 = %p\n\n", arr[2] + 1);

    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
    printf("sizeof(arr[0]) = %zd\n\n", sizeof(arr[0]));

    return 0;
}