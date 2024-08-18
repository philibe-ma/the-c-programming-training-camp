#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4};

    printf("%zd\n",sizeof(a));          // array
    printf("%zd\n",sizeof(a+0));        // int pointer
    printf("%zd\n",sizeof(*a));         // int
    printf("%zd\n",sizeof(a+1));        // int pointer
    printf("%zd\n",sizeof(a[1]));       // int
    printf("%zd\n",sizeof(&a));         // int array pointer
    printf("%zd\n",sizeof(*&a));        // array
    printf("%zd\n",sizeof(&a+1));       // int array pointer
    printf("%zd\n",sizeof(&a[0]));      // int pointer
    printf("%zd\n",sizeof(&a[0]+1));    // int pointer

    return 0;
}