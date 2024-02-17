#include "Slist.h"
#include <windows.h>

void menu()
{
    printf("***************通讯录**************\n");
    printf("*****1.添加联系人 2.删除联系人*****\n");
    printf("*****3.修改联系人 4.查找联系人*****\n");
    printf("*****5.查看联系人 0.  退  出  *****\n");
    printf("***********************************\n");
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int op = -1;
    contact* con = NULL; // 修改为指针并初始化为NULL

    InitContact(&con);
    do
    {
        menu();
        printf("请选择你的操作:\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            AddContact(&con);
            break;
        case 2:
            DelContact(&con);
            break;
        case 3:
            ModifyContact(&con);
            break;
        case 4:
            FindContact(con);
            break;
        case 5:
            ShowContact(con);
            break;
        case 0:
            printf("通讯录退出中....\n");
            break;
        default:
            break;
        }
    } while (op != 0);
    DestroyContact(&con);
    return 0;
}