#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    int i, j;
    int single_num = 0;

    int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; ++i)
    {
        single_num ^= arr[i];
    }

    printf("the single number is %d\n", single_num);

    return 0;
}
