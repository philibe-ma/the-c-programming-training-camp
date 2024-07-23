#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER 1
#define UPPER 100
#define LIMIT 5

void print_menu();
void guess_the_number();


int main()
{
    int input;
    srand((unsigned int)time(NULL));

    while (1)
    {
        print_menu();
        scanf("%d", &input);
        if (input != 0 && input != 1)
        {
            continue;
        }
        else if (input == 0)
        {
            break;
        }
        guess_the_number();
    }

    return 0;
}


void print_menu()
{
    printf("****************\n");
    printf("**** 1.play ****\n");
    printf("**** 0.exit ****\n");
    printf("****************\n");
    printf("Enter 1/0: ");
}


void guess_the_number()
{
    printf("\nGuess the Number\n");
    int num = rand() % (UPPER - LOWER + 1) + LOWER;

    printf("A number (%d~%d) has been generated. Guess what it is.\n",  LOWER, UPPER);
    int guess;
    int count = 0;
    while (1)
    {
        printf("Your guess: ");
        scanf("%d", &guess);
        ++count;
        if (guess < num)
        {
            printf("too small (%d/%d)\n", count, LIMIT);
        }
        else if (guess > num)
        {
            printf("too large (%d/%d)\n", count, LIMIT);
        }
        else
        {
            if (count == 1)
            {
                printf("You guessed the exactly right number in the first  time!\n\n");
            }
            else
            {
                printf("You guessed the exactly right number in %d times!\n\n", count);
            }
            break;
        }
        if (count >= LIMIT)
        {
            printf("You have used up all your chances. Game over.\n\n");
            break;
        }
    }
}