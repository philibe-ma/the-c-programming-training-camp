#include <stdio.h>

int is_power_two(int num)
{
    if ((num & (num-1)) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        printf("is_power_two(%d) = %d\n", num, is_power_two(num));
    }
    
    return 0;
}
