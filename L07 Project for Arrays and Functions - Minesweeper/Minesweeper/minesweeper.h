#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"


#define ROWB    9   // number of rows for beginner level
#define COLB    9   // number of cols for beginner level
#define TOTALB  10  // number of mines for beginner level

#define ROWM    16  // number of rows for medium level
#define COLM    16  // number of cols for medium level
#define TOTALM  40  // number of mines for medium level

#define ROWE    20  // number of rows for expert level
#define COLE    25  // number of cols for expert level
#define TOTALE  99  // number of mines for expert level


static int ROW = ROWB;     // the actual number of rows in a game
static int COL = COLB;     // the actual number of cols in a game
static int TOTAL = TOTALB; // the actual number of mines in a game

static int ROWS = ROWB+ 2; // the rows of spanned array
static int COLS = COLB + 2; // the cols of spanned array

static int unmarked = TOTALB;   // the number of squares can be marked


int minesweeper();
static void display_level_options();
static void set_level(int input);
static void init_game_board(int rows, int cols, int mines[rows][cols], int nums[rows][cols], int squares[rows][cols], int news[rows][cols]);
static void set_mines(int rows, int cols, int mines[rows][cols]);
static void display_mines(int rows, int cols, int mines[rows][cols]);
static void display_mines_spanned(int rows, int cols, int mines[rows][cols]);
static void generate_numbers(int rows, int cols, int mines[rows][cols], int nums[rows][cols]);
static void display_nums(int rows, int cols, int nums[rows][cols]);
static void initialize_squares(int rows, int cols, int squares[rows][cols]);
static void display_squares(int rows, int cols, int squares[rows][cols]);
static void display_square_values_spanned(int rows, int cols, int squares[rows][cols]);
static void display_board(int rows, int cols, int squares[rows][cols]);
static void initialize_news(int rows, int cols, int news[rows][cols]);
static void mark_square(int rows, int cols, int squares[rows][cols], int r, int c);
static void unmark_square(int rows, int cols, int squares[rows][cols], int r, int c);
static int check_square(int rows, int cols, int mines[rows][cols], int nums[rows][cols], int squares[rows][cols], int r, int c);
static void auto_check_all_safe(int rows, int cols, int nums[rows][cols], int squares[rows][cols]);
static int check_surrounding_squares(int rows, int cols, int nums[rows][cols], int squares[rows][cols], int r, int c);
static int are_all_cleared(int rows, int cols, int mines[rows][cols], int squares[rows][cols]);
static void display_board_win(int rows, int cols, int mines[rows][cols], int nums[rows][cols]);
static void display_board_lose(int rows, int cols, int mines[rows][cols], int squares[rows][cols], int last_r, int last_c);