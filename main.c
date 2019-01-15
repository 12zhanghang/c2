#include <stdio.h>

char arr[1024];
int index = 0;
int main()
{

    printf("进入敏感字符系统\n");
    while (1)
    {
    printf("1---添加敏感字符\n");
    printf("2---删除敏感字符\n");
    printf("3---查看敏感字符\n");
    printf("4---替换敏感字符\n");
    printf("5---退出\n");
    printf("请输入相应功能\n");
    int code;
    scanf("%d", &code);
    if (code == 1)
        if (code == 2)
            if (code == 3)
                if (code == 4)
                    if (code == 5)
                        break;
    }
}