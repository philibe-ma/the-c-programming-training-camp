#include<stdio.h>

#define YUAN_PER_BOTTLE 1
#define EMPTY_BOTTLES_TO_GET_ANOTHER 2

int get_more(int empty_bottles)
{
    if (empty_bottles <= 1)
        return 0;
    else
        return empty_bottles/EMPTY_BOTTLES_TO_GET_ANOTHER + 
               get_more(empty_bottles/EMPTY_BOTTLES_TO_GET_ANOTHER +
                        empty_bottles%EMPTY_BOTTLES_TO_GET_ANOTHER);
}

int main()
{
    int original_money = 20;
    int total_bottles = 0;

    total_bottles = original_money/YUAN_PER_BOTTLE + 
                    get_more(original_money/YUAN_PER_BOTTLE);
    printf("%d\n", total_bottles);

    return 0;
}
