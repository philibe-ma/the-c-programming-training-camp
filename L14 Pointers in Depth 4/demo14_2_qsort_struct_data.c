#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Scores
{
    int math;
    int physics;
    int chemistry;
};

struct Student
{
    char id[11];
    char name[11];
    int age;
    int gender;
    struct Scores scores;
};

int cmp_id(const void *p1, const void *p2)
{
    struct Student stu1 = *(struct Student *)p1;
    struct Student stu2 = *(struct Student *)p2;

    return strcmp(stu1.id, stu2.id);
}

int cmp_age(const void *p1, const void *p2)
{
    struct Student stu1 = *(struct Student *)p1;
    struct Student stu2 = *(struct Student *)p2;

    return stu2.age - stu1.age;
}

int cmp_math(const void *p1, const void *p2)
{
    struct Student stu1 = *(struct Student *)p1;
    struct Student stu2 = *(struct Student *)p2;

    return stu2.scores.math - stu1.scores.math;
}

void print_students_id(struct Student *students, int len)
{
    qsort(students, len, sizeof(struct Student), cmp_id);

    printf("\nlist students according to id:\n");
    for (int i = 0; i < len; ++i)
    {
        printf("%-10s %-10s\n", students[i].id, students[i].name);
    }
}

void print_students_age(struct Student *students, int len)
{
    qsort(students, len, sizeof(struct Student), cmp_age);

    printf("\nlist students according to age (descending):\n");
    for (int i = 0; i < len; ++i)
    {
        printf("%-10s %-10s %2d\n", students[i].id, students[i].name, students[i].age);
    }
}

void print_students_math(struct Student *students, int len)
{
    qsort(students, len, sizeof(struct Student), cmp_math);

    printf("\nlist students according to math score (descending):\n");
    for (int i = 0; i < len; ++i)
    {
        printf("%-10s %-10s %3d\n", students[i].id, students[i].name, students[i].scores.math);
    }
}

int main()
{
    struct Student Philibe  = {"2024035020", "Philibe",  5, 1, {99, 97, 91}};
    struct Student June     = {"2024035011", "June",     7, 1, {88, 89, 95}};
    struct Student Shawn    = {"2024035027", "Shawn",    2, 0, {75, 70, 70}};
    struct Student Dangdang = {"2024035008", "Dangdang", 3, 1, {66, 61, 61}};
    struct Student students[] = {Philibe, June, Shawn, Dangdang};

    print_students_id(students, 4);
    print_students_age(students, 4);
    print_students_math(students, 4);

    return 0;
}