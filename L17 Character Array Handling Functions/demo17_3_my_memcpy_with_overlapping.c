#include <stdio.h>

void *my_memcpy(void *dest, const void *src, size_t count)
{
    void *ret = dest;

    for (int i = 0; i < count; ++i)
    {
        *(char *)dest = *(char *)src;
        dest = (char *)dest + 1;
        src = (char *)src + 1;
    }

    return ret;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num = 5;
    my_memcpy(arr+2, arr, num * sizeof(int));

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}