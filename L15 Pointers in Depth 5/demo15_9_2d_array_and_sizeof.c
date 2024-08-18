#include <stdio.h>

int main()
{
    int a[3][4] = {0};      // 2d array, 3 rows 4 cols, 12 int elements

    printf("%zd\n",sizeof(a));          // the entire 2d array
    printf("%zd\n",sizeof(a[0][0]));    // int
    printf("%zd\n",sizeof(a[0]));       // int array
    printf("%zd\n",sizeof(a[0]+1));     // int array pointer
    printf("%zd\n",sizeof(*(a[0]+1)));  // int
    printf("%zd\n",sizeof(a+1));        // int array pointer
    printf("%zd\n",sizeof(*(a+1)));     // int array
    printf("%zd\n",sizeof(&a[0]+1));    // int array pointer
    printf("%zd\n",sizeof(*(&a[0]+1))); // int array
    printf("%zd\n",sizeof(*a));         // int array
    printf("%zd\n",sizeof(a[3]));       // int array

    return 0;
}