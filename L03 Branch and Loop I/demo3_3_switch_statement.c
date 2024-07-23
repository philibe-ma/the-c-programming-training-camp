#include <stdio.h>

int main()
{
    int day = 0;
    printf("Enter the day of a week: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("It is a weekday.\n");
        break;
    case 6:
    case 7:
        printf("It is weekend.\n");
        break;
    default:
        printf("invalid input\n");
        break;
    }

    return 0;
}