#include <stdio.h>

// CAUTION: do not run this program until you fully understand it
// the array index is out of bounds in the for loop
// infinite loop may occur depending on the environment
int main()
{
    int i = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (i = 0; i <= 12; ++i)
    {
        arr[i] = 0;
        printf("haha\n");
    }

    return 0;
}
