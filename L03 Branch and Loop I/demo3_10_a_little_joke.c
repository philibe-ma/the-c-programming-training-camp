#include <stdio.h>
#include <windows.h>
#include <string.h>

// CAUTION: don't run this program unless you fully undertand it
// PROBLEM: this program has been run successfully in VS (being copied entirely)
// but behaved strangely here in VS Code in the terminal
// don't know the reason yet
int main()
{
    char input[20];
    system("shutdown -s -t 60");
    printf("��ĵ��Խ��� 1 �����ڹػ��������롰������ȡ���ػ���\n");
    while (1)
    {
        scanf("%s", input);
        if (strcmp(input, "������") == 0)
        {
            system("shutdown -a");
            printf("��ȡ���ػ�\n");
            break;
        }
        else
        {
            printf("����ȷ���롰��������������ĵ��Ժܿ�ͻ�رգ�\n");
        }
    }
    printf("��������˳�\n");
    getchar();
    getchar();

    return 0;
}