#include "minesweeper.h"


// a single round of the game
int minesweeper()
{
    int input = -1;
    int r = 0, c = 0;
    int last_r = 0, last_c = 0;
    // flag =  0    continue the game
    // flag =  1    end the game & win
    // flag = -1    end the game & lose
    int flag = 0;

    display_level_options();

    // wait for user input
    printf(">>> ");
    scanf("%d", &input);
    clear_stdin_buffer();
    while (input != 1 && input != 2 && input != 3)
    {
        printf("invalid input\n");
        printf(">>> ");
        scanf("%d", &input);
        clear_stdin_buffer();
    }
    printf("you have selected level %d\n", input);
    
    set_level(input);
    // reset
    input = -1;

    // create the arrays to hold the key data and initialize the data
    int mines[ROWS][COLS];
    int nums[ROWS][COLS];
    int squares[ROWS][COLS];
    int news[ROWS][COLS];
    init_game_board(ROWS, COLS, mines, nums, squares, news);

    // the main game loop
    while (1)
    {
        display_board(ROWS, COLS, squares);
        
        // ask user to select a square
        printf("Select a square (R C)\n");
        // wait for user input
        printf(">>> ");
        scanf("%d %d", &r, &c);
        clear_stdin_buffer();
        while ((r < 1 || r > ROW) || (c < 1 || c > COL) || (squares[r][c] >= 0))
        {
            if (squares[r][c] >= 0)

                printf("square (%d, %d) already checked, select another\n", r, c);
            else
                printf("invalid input\n");
            printf(">>> ");
            scanf("%d %d", &r, &c);
            clear_stdin_buffer();
        }
        printf("square (%d, %d) selected\n", r, c);

        // ask user to select an operation
        printf("Select an operation\n");
        printf("1. Check%s\n", ((squares[r][c]==-2)?" - disabled":""));
        printf("2. Mark%s\n", ((squares[r][c]==-2 || unmarked <= 0)?" - disabled":""));
        printf("3. Unmark%s\n", ((squares[r][c]==-1)?" - disabled":""));
        printf("0. Skip\n");
        // wait for user input
        printf(">>> ");
        scanf("%d", &input);
        clear_stdin_buffer();
        // while ((squares[r][c] == -1 && (input != 0 && input != 1 && input != 2)) || (squares[r][c] == -2 && (input != 0 && input != 3)))
        while ((input==1 && squares[r][c]==-2) || (input==2 && (squares[r][c]==-2 || unmarked<=0)) || (input==3 && squares[r][c]==-1) || (input>3 || input<0))
        {
            // if ((squares[r][c]==-1 && input == 3) || (squares[r][c]==-2 && (input == 1 || input == 2)))
            if ((input==1 && squares[r][c]==-2) || (input==2 && squares[r][c]==-2) || (input==3 && squares[r][c]==-1))
                printf("operation disabled, select another\n");
            else if (input==2 && squares[r][c]==-1 && unmarked<=0)
                printf("could not mark more than %d squares\n", TOTAL);
            else
                printf("invalid input\n");
            printf(">>> ");
            scanf("%d", &input);
            clear_stdin_buffer();
        }
        // the execution of operation
        if (input == 1)
        {
            printf("checking square (%d, %d)...\n", r, c);
            flag = check_square(ROWS, COLS, mines, nums, squares, r, c);
        }
        else if (input == 2)
        {
            printf("marking square (%d, %d)...\n", r, c);
            mark_square(ROWS, COLS, squares, r, c);
        }
        else if (input == 3)
        {
            printf("unmarking square (%d, %d)...\n", r, c);
            unmark_square(ROWS, COLS, squares, r, c);
        }
        else if (input == 0)
        {
            printf("skipping operation...\n");
        }

        last_r = r;
        last_c = c;
        // reset
        r = 0;
        c = 0;
        input = -1;

        printf("press enter to continue...\n");
        getchar();

        if (flag == 1 || flag == -1)
            break;
    }

    // display the result (win/lose)
    if (flag == 1)
    {
        display_board_win(ROWS, COLS, mines, nums);
        printf("Good job! You have cleared all the mines without hurt~\n");
        printf("press enter to continue...\n");
        getchar();
        return 1;
    }
    else if (flag == -1)
    {
        display_board_lose(ROWS, COLS, mines, squares, last_r, last_c);
        printf("Oops, you have stepped on the mine... BOOOOM!\n");
        printf("press enter to continue...\n");
        getchar();
        return 0;
    }
}


// display the level options
static void display_level_options()
{
    printf("\n------------- SELECT LEVEL -------------\n");
    printf("-- 1. BEGINNER                        --\n");
    printf("-- 2. MEDIUM                          --\n");
    printf("-- 3. EXPERT                          --\n");
    printf("----------------------------------------\n");
}


// set the game level
static void set_level(int input)
{
    if (input == 1)
    {
        ROW = ROWB;
        COL = COLB;
        TOTAL = TOTALB;
    }
    else if (input == 2)
    {
        ROW = ROWM;
        COL = COLM;
        TOTAL = TOTALM;
    }
    else if (input == 3)
    {
        ROW = ROWE;
        COL = COLE;
        TOTAL = TOTALE;
    }
    ROWS = ROW + 2;
    COLS = COL + 2;

    unmarked = TOTAL;
}


// initialize the game board
static void init_game_board(int rows, int cols, int mines[rows][cols], int nums[rows][cols], int squares[rows][cols], int news[rows][cols])
{
    set_mines(rows, cols, mines);
    generate_numbers(rows, cols, mines, nums);
    initialize_squares(rows, cols, squares);
    initialize_news(rows, cols, news);

    // for test
    // display_mines(rows, cols, mines);
    // display_mines_spanned(rows, cols, mines);
    // display_nums(rows, cols, nums);
    // display_squares(rows, cols, squares);
    // display_square_values_spanned(rows, cols, squares);
}


// set the mines
static void set_mines(int rows, int cols, int mines[rows][cols])
{
    // set all the values to be 0 -- no mine
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            mines[i][j] = 0;
        }
    }

    // set mines randomly to the number of total
    srand((unsigned)time(NULL));
    int count = 0;
    while (count < TOTAL)
    {
        int r = rand() % (rows - 2) + 1;
        int c = rand() % (cols - 2) + 1;

        if (mines[r][c] != 1)
        {
            mines[r][c] = 1;
            ++count;
        }
    } 
}


// display the mines directly for test
static void display_mines(int rows, int cols, int mines[rows][cols])
{
    int i, j;

    printf("\n--------- TEST: DISPLAY MINES ----------\n");

    printf("     ");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 1; i <= rows - 2; ++i)
    {
        printf("%02d   ", i);
        for (j = 1; j <= cols - 2; ++j) printf("%d ", mines[i][j]);
        printf("\n");
    }

    printf("----------------------------------------\n");
}


// display the mines spanned directly for test
static void display_mines_spanned(int rows, int cols, int mines[rows][cols])
{
    int i, j;

    printf("\n----- TEST: DISPLAY MINES SPANNED ------\n");

    printf("     ");
    for (j = 0; j < cols; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 0; j < cols; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 0; i < rows; ++i)
    {
        printf("%02d   ", i);
        for (j = 0; j < cols; ++j) printf("%d ", mines[i][j]);
        printf("\n");
    }

    printf("----------------------------------------\n");
}


// generate the numbers of surrounding mines for each square
static void generate_numbers(int rows, int cols, int mines[rows][cols], int nums[rows][cols])
{
    int i, j;

    for (i = 1; i <= rows - 2; ++i)
    {
        for (j = 1; j <= cols - 2; ++j)
        {
            nums[i][j] = mines[i-1][j-1] + mines[i-1][j] + mines[i-1][j+1] +
                         mines[i][j-1] + mines[i][j+1] + 
                         mines[i+1][j-1] + mines[i+1][j] + mines[i+1][j+1];
        }
    }
}


// display the numbers directly for test
static void display_nums(int rows, int cols, int nums[rows][cols])
{
    int i, j;

    printf("\n---------- TEST: DISPLAY NUMS ----------\n");

    printf("     ");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 1; i <= rows - 2; ++i)
    {
        printf("%02d   ", i);
        for (j = 1; j <= cols - 2; ++j) printf("%d ", nums[i][j]);
        printf("\n");
    }

    printf("----------------------------------------\n");
}


// initialize the square status
static void initialize_squares(int rows, int cols, int squares[rows][cols])
{
    int i, j;

    // set all status value to be -1 -- unchecked & unmarked
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            squares[i][j] = -1;
        }
    }
}


// display the square values directly for test
static void display_squares(int rows, int cols, int squares[rows][cols])
{
    int i, j;

    printf("\n-------- TEST: DISPLAY SQUARES ---------\n");

    printf("     ");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 1; i <= rows - 2; ++i)
    {
        printf("%02d   ", i);
        for (j = 1; j <= cols - 2; ++j)
        {
            if (squares[i][j] >= 0) printf("%d ", squares[i][j]);
            else if (squares[i][j] == -1) printf("U ");
            else if (squares[i][j] == -2) printf("M");
        }
        printf("\n");
    }

    printf("----------------------------------------\n");

}


// display the values of the squares spanned for test
static void display_square_values_spanned(int rows, int cols, int squares[rows][cols])
{
    printf("\n");
    for (int s = 0; s < ROWS; ++s)
    {
        printf("%d ", &squares[s][0]);
        for (int t = 0; t < COLS; ++t)
            printf("%d ", squares[s][t]);
        printf("\n");
    } 
    printf("\n");
}


// initialize news data
static void initialize_news(int rows, int cols, int news[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            news[i][j] = 0;
        }
    }
}


// display the board
static void display_board(int rows, int cols, int squares[rows][cols])
{
    int i,j;

    printf("\n----------------------------------------\n");
    printf("-- UNMARKED %02d                        --\n", unmarked);
    printf("----------------------------------------\n");

    printf("     ");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 1; i <= rows - 2; ++i)
    {
        printf("%02d   ", i);
        for (j = 1; j <= cols - 2; ++j)
        {
            if (squares[i][j] >= 0)
            {
                printf("%d ", squares[i][j]);
            }
            else if (squares[i][j] == -1)
            {
                printf("* ");
            }
            else if (squares[i][j] == -2)
            {
                printf("F ");
            }
        }
        printf("\n");
    }

    printf("----------------------------------------\n");
}


// mark the selected square
static void mark_square(int rows, int cols, int squares[rows][cols], int r, int c)
{
    if (squares[r][c] == -1 && unmarked >= 0)
    {
        squares[r][c] = -2;
        --unmarked;
    }
}

// unmark the selected square
static void unmark_square(int rows, int cols, int squares[rows][cols], int r, int c)
{
    if (squares[r][c] == -2)
    {
        squares[r][c] = -1;
        ++unmarked;
    }
}


// check the square
static int check_square(int rows, int cols, int mines[rows][cols], int nums[rows][cols], int squares[rows][cols], int r, int c)
{
    // printf("entered check_squares()\n");  // for test
    
    // checked
    squares[r][c] = nums[r][c];

    if (mines[r][c] == 1)
    {
        return -1;
    }
    else if (mines[r][c] == 0)
    {
        auto_check_all_safe(rows, cols, nums, squares);
        if (are_all_cleared(rows, cols, mines, squares))
            return 1;
        else
            return 0;
    }
}


// auto check all the continous and adjacent squares that 
static void auto_check_all_safe(int rows, int cols, int nums[rows][cols], int squares[rows][cols])
{
    // printf("entered auto_check_all_safe()\n");  // for test
    
    int i, j;
    int are_all_checked = 1;

    do
    {
        are_all_checked = 1;

        for (i = 1; i <= rows-2; ++i)
        {
            for (j = 1; j <= cols-2; ++j)
            {
                if (squares[i][j] >= 0 && nums[i][j] == 0)
                {
                    if (check_surrounding_squares(rows, cols, nums, squares, i, j) == 0)
                        are_all_checked = 0;
                }
            }
        }
    } while (are_all_checked == 0);
}


// check the surouding 8 squares
static int check_surrounding_squares(int rows, int cols, int nums[rows][cols], int squares[rows][cols], int r, int c)
{
    // printf("entered check_surrounding_squares(%d, %d)\n", r, c);    // for test

    int flag = 1;
    if (squares[r-1][c-1] < 0)
    {
        if ((squares[r-1][c-1] = nums[r-1][c-1]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r-1, c-1,flag);   // for test
    }
    if (squares[r-1][c] < 0)
    {
        if ((squares[r-1][c] = nums[r-1][c]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r-1, c,flag);     // for test
    }
    if (squares[r-1][c+1] < 0)
    {
        if ((squares[r-1][c+1] = nums[r-1][c+1]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r-1, c+1,flag);   // for test
    }
    if (squares[r][c-1] < 0)
    {
        if ((squares[r][c-1] = nums[r][c-1]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r, c-1,flag);     // for test
    }
    if (squares[r][c+1] < 0)
    {
        if ((squares[r][c+1] = nums[r][c+1]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r, c+1,flag);     // for test
    }
    if (squares[r+1][c-1] < 0)
    {
        if ((squares[r+1][c-1] = nums[r+1][c-1]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r+1, c-1,flag);   // for test
    }
    if (squares[r+1][c] < 0)
    {
        if ((squares[r+1][c] = nums[r+1][c]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r+1, c,flag);     // for test
    }
    if (squares[r+1][c+1] < 0)
    {
        if ((squares[r+1][c+1] = nums[r+1][c+1]) == 0)
            flag = 0;
        // printf("square[%d][%d] checked, flag = %d\n", r+1, c+1,flag);   // for test
    }

    // printf("flag = %d\n", flag);  // for test
    return flag;
}


// check if all the mines are cleared
static int are_all_cleared(int rows, int cols, int mines[rows][cols], int squares[rows][cols])
{
    // printf("entered are_all_cleared()\n");  // for test

    int i, j;

    for (int i = 1; i <= rows-2; ++i)
    {
        for (int j = 1; j <= cols-2; ++j)
        {
            if (mines[i][j] == 0 && squares[i][j] < 0)
            {
                // printf("not all cleared at (%d, %d)\n", i, j);  // for test
                return 0;
            }
        }
    }
    // printf("all cleared\n");    // for test
    return 1;
}


// display the board (win)
static void display_board_win(int rows, int cols, int mines[rows][cols], int nums[rows][cols])
{
    int i,j;

    printf("\n----------------------------------------\n");
    printf("-- UNMARKED %02d                        --\n", unmarked);
    printf("----------------------------------------\n");

    printf("     ");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 1; i <= rows - 2; ++i)
    {
        printf("%02d   ", i);
        for (j = 1; j <= cols - 2; ++j)
        {
            if (mines[i][j] == 0)
            {
                printf("%d ", nums[i][j]);
            }
            else if (mines[i][j] == 1)
            {
                printf("F ");
            }
        }
        printf("\n");
    }

    printf("----------------------------------------\n");
}


// display the board (lose)
static void display_board_lose(int rows, int cols, int mines[rows][cols], int squares[rows][cols], int last_r, int last_c)
{
    int i,j;

    printf("\n----------------------------------------\n");
    printf("-- UNMARKED %02d                        --\n", unmarked);
    printf("----------------------------------------\n");

    printf("     ");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j/10);
    printf("\n    C");
    for (j = 1; j <= cols - 2; ++j) printf("%d ", j%10);
    printf("\n R\n");

    for (i = 1; i <= rows - 2; ++i)
    {
        printf("%02d   ", i);
        for (j = 1; j <= cols - 2; ++j)
        {
            if (squares[i][j] >= 0)
            {
                if (i == last_r && j == last_c)
                    printf("B ");
                else
                    printf("%d ", squares[i][j]);
            }
            else if (squares[i][j] == -1 && mines[i][j] == 0)
            {
                printf("* ");
            }
            else if (squares[i][j] == -1 && mines[i][j] == 1)
            {
                printf("X ");
            }
            else if (squares[i][j] == -2 && mines[i][j] == 0)
            {
                printf("f ");
            }
            else if (squares[i][j] == -2 && mines[i][j] == 1)
            {
                printf("F ");
            }
        }
        printf("\n");
    }

    printf("----------------------------------------\n");
}