#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char text1[] = "welcome to the world of c programming";
    char text2[] = "*************************************";
    /*char text1[] = "abcd";
    char text2[] = "****";*/

    int left = -1;
    int right = strlen(text1);

    while (left <= right)
    {
        system("cls");
        printf("%s\n", text2);

        ++left;
        --right;
        text2[left] = text1[left];
        text2[right] = text1[right];

        Sleep(1000);
    }

    return 0;
}