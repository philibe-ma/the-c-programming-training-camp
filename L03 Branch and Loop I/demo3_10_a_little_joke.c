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
    printf("你的电脑将在 1 分钟内关机。请输入“我是猪”取消关机：\n");
    while (1)
    {
        scanf("%s", input);
        if (strcmp(input, "我是猪") == 0)
        {
            system("shutdown -a");
            printf("已取消关机\n");
            break;
        }
        else
        {
            printf("请正确输入“我是猪”，否则你的电脑很快就会关闭：\n");
        }
    }
    printf("按任意键退出\n");
    getchar();
    getchar();

    return 0;
}