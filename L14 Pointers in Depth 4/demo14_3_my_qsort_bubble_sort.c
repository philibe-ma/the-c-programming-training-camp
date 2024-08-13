#include <stdio.h>

void my_swap(void *p1, void *p2, size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        char temp = *((char *)p1 + i);
        *((char *)p1 + i) = *((char *)p2 + i);
        *((char *)p2 + i) = temp;
    }
}

void my_qsort(void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *))
{
    for (int i = 0; i < count-1; ++i)
    {
        for (int j = 0; j < count-1-i; ++j)
        {
            if (comp((char *)ptr + j*size, (char *)ptr + (j+1)*size) > 0)
                my_swap((char *)ptr + j*size, (char *)ptr + (j+1)*size, size);
        }
    }
}

int comp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int arr[] = {3, 1, 9, 8, 5, 4, 0, 2, 7, 6};
    int len = sizeof(arr) / sizeof(int);

    my_qsort(arr, len, sizeof(int), comp);

    for (int i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}