#include <stdio.h>

int main()
{
    int k = 0;
    scanf("%d", &k);
    int arr[k];
    
    int i;
    for (i = 0; i < k; ++i)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < k; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}