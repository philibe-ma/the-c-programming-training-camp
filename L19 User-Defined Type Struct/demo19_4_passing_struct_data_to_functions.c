#include <stdio.h>

struct S
{
    int data[1000];
    int num;
};

void print_num_1(struct S s)
{
    printf("%d\n", s.num);
}

void print_num_2(struct S *s)
{
    printf("%d\n", s->num);
}

int main()
{
    struct S s = {{1, 2, 3, 4, 5}, 5};

    print_num_1(s);
    print_num_2(&s);

    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));

    return 0;
}