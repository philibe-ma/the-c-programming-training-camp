#include <stdio.h>

struct S1
{
    char c1;
    char c2;
    int n;
};

struct S2
{
    char c1;
    int n;
    char c2;
};

struct S3
{
    double d;
    char c;
    int i;
};

struct S4
{
    char c;
    struct S3 s;
    double d;
};

struct S5
{
    char c;
    double d;
    int i;
};

struct S6
{
    char c;
    struct S5 s;
    double d;
};

int main()
{
    printf("%zd\n", sizeof(struct S1));
    printf("%zd\n", sizeof(struct S2));
    printf("%zd\n", sizeof(struct S3));
    printf("%zd\n", sizeof(struct S4));
    printf("%zd\n", sizeof(struct S5));
    printf("%zd\n", sizeof(struct S6));

    struct S1 s1 = {'a', 'b', 10};
    struct S2 s2 = {'a', 10, 'b'};
    struct S3 s3 = {9.0, 'e', 200};
    struct S4 s4 = {'g', {9.0, 'e', 200}, -8.1};
    struct S5 s5 = {'e', 9.0, 200};
    struct S6 s6 = {'h', {'e', 9.0, 200}, -8.1};

    return 0;
}