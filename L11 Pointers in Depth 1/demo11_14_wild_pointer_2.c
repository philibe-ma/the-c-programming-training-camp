#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int *ptr = arr;
    for (int i = 0; i <= 10; ++i)
    {
        *(ptr++) = i;
    }

    return 0;
}