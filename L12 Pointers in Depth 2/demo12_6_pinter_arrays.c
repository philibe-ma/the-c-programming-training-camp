#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *arr[3] = {&a, &b, &c};

    for (int i = 0; i < 3; ++i)
    {
        printf("%d ", *arr[i]);
        // printf("%d ", **(arr + i));
    }
    printf("\n");
    
    return 0;
}