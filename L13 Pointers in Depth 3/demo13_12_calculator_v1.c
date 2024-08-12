#include <stdio.h>

// clear stdin buffer, especially needed after illegal input
void clear_stdin_buffer()
{
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n')
    {}
}

void add(int a, int b)
{
    printf("RESULT: %d + %d = %d\n", a, b, a + b);
}

void sub(int a, int b)
{
    printf("RESULT: %d - %d = %d\n", a, b, a - b);
}

void mul(int a, int b)
{
    printf("RESULT: %d * %d = %d\n", a, b, a * b);
}

void div(int a, int b)
{
    printf("RESULT: %d / %d = %d\n", a, b, a / b);
}

void mod(int a, int b)
{
    printf("RESULT: %d %% %d = %d\n", a, b, a % b);
}

int main()
{
    int input;
    int a;
    int b;

    while (1)
    {
        printf("\nSELECT OPERATOR\n");
        printf("  1. add\n");
        printf("  2. sub\n");
        printf("  3. mul\n");
        printf("  4. div\n");
        printf("  5. mod\n");
        printf("  0. exit\n");
        printf(">>> ");
        scanf("%d", &input);
        clear_stdin_buffer();
        while ((input != 0) && (input != 1) && (input != 2) && (input != 3) && (input != 4) && (input != 5))
        {
            printf("invalid input\n");
            printf(">>> ");
            scanf("%d", &input);
            clear_stdin_buffer();
        }

        if (input == 1)
        {
            printf("ENTER TWO OPERANDS\n");
            printf(">>> ");
            scanf("%d %d", &a, &b);
            clear_stdin_buffer();
            add(a, b);
            printf("press enter to continue...");
            getchar();
        }   
        else if (input == 2)
        {
            printf("ENTER TWO OPERANDS\n");
            printf(">>> ");
            scanf("%d %d", &a, &b);
            clear_stdin_buffer();
            sub(a, b);
            printf("press enter to continue...");
            getchar();
        }     
        else if (input == 3)
        {
            printf("ENTER TWO OPERANDS\n");
            printf(">>> ");
            scanf("%d %d", &a, &b);
            clear_stdin_buffer();
            mul(a, b);
            printf("press enter to continue...");
            getchar();
        }
        else if (input == 4)
        {
            printf("ENTER TWO OPERANDS\n");
            printf(">>> ");
            scanf("%d %d", &a, &b);
            clear_stdin_buffer();
            div(a, b);
            printf("press enter to continue...");
            getchar();
        }
        else if (input == 5)
        {
            printf("ENTER TWO OPERANDS\n");
            printf(">>> ");
            scanf("%d %d", &a, &b);
            clear_stdin_buffer();
            mod(a, b);
            printf("press enter to continue...");
            getchar();
        }
        else if (input == 0)
        {
            printf("exiting...\n");
            break;
        }
    }

    return 0;
}