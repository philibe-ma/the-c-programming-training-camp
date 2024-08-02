#include <stdio.h>

struct Scores
{
    int math;
    int physics;
    int chemistry;
};

int main()
{
    struct Student
    {
        char id[11];
        char name[20];
        int age;
        int gender;
        struct Scores scores;
    } philibe = {"2024035020", "Philibe", 5, 1, {.physics=99, .math=97, .chemistry=92}};

    struct Student june = {.gender=1, .age=7, .name="June", .scores={90, 82, 95}, .id="2024035011"};

    printf("%s(%s) math socre: %d\n", philibe.name, philibe.id, philibe.scores.math);

    struct Student *ptr = &june;
    printf("%s(%s) math score: %d\n", ptr->name, ptr->id, ptr->scores.math);

    return 0;
}
