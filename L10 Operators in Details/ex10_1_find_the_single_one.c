#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    int i, j, flag;

    int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; ++i)
    {
        flag = 1;
        for (j = 0; j < len; ++j)
        {
            if (arr[i] == arr[j] && i != j)
                flag = 0;
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        printf("the single number is %d\n", arr[i]);
    else
        printf("no single number found\n");

    return 0;
}
