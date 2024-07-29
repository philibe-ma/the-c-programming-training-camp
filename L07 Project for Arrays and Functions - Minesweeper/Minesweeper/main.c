#include <stdio.h>
#include "minesweeper.h"
#include "input.h"

int rounds_played = 0;
int rounds_winned = 0;

void display_menu();


int main()
{
    int input = -1;

    // the main loop
    while (1)
    {
        // display stats and main menu
        display_menu();

        // wait for user input
        printf(">>> ");
        scanf("%d", &input);
        clear_stdin_buffer();
        while (input != 1 && input != 0)
        {
            printf("invalid input\n");
            printf(">>> ");
            scanf("%d", &input);
            clear_stdin_buffer();
        }

        if (input == 1)
        {
            printf("starting minesweeper...\n");
            int r = minesweeper();

            // update stats
            ++rounds_played;
            rounds_winned += r;
        }
        else if (input == 0)
        {
            printf("exiting program...\n");
            break;
        }
    }

    return 0;
}


// display the stats and main menu
void display_menu()
{
    printf("\n---------------- STATS -----------------\n");
    printf("-- PLAYED %02d                          --\n", rounds_played);
    printf("-- WIN    %02d                          --\n", rounds_winned);
    printf("--------------- OPTIONS ----------------\n");
    printf("-- 1. PLAY                            --\n");
    printf("-- 0. EXIT                            --\n");
    printf("----------------------------------------\n");
}