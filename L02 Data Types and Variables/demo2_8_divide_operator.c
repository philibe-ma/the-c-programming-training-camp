#include <stdio.h>

int main()
{
    int score = 5;
    // score = (score / 20) * 100;
    score = (score / 20.0) * 100;
    printf("%d\n", score);

    return 0;
}