#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (a + b > c && b + c > a && c + a > b) {
            if (a == b && b == c && c == a) {
                printf("equilateral triangle\n");
            }
            else if (a == b || b == c || c == a) {
                printf("isosceles triangle\n");
            }
            else {
                printf("ordinary triangle\n");
            }
        }
        else {
            printf("not a triangle\n");
        }
    }

    return 0;
}