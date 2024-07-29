#include "input.h"

// clear stdin buffer, especially needed after illegal input
void clear_stdin_buffer()
{
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n')
    {}
}