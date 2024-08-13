#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int arr[] = {3, 1, 9, 8, 5, 4, 0, 2, 7, 6};
    int len = sizeof(arr) / sizeof(int);

    qsort(arr, len, sizeof(int), cmp);
    for (int i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}