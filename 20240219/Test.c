#include "List.h"
#include <windows.h>

void Test01()
{
    LTNode* plist = LTInit();
    LTPushBack(plist, 1);
    LTPushBack(plist, 2);
    LTPushBack(plist, 3);
    LTPushFront(plist, 4);
    LTPushFront(plist, 5);
    LTPushFront(plist, 6);
    LTPopBack(plist);
    LTPopFront(plist);
    LTPrint(plist);
    LTNode* findRet = LTFind(plist, 4);
    /* if (findRet)
    {
        printf("找到了!\n");
    }
    else
    {
        printf("没找到!\n");
    } */

    LTInsert(findRet, 6);
    LTPrint(plist);
    LTErase(findRet);
    LTPrint(plist);

    LTDestroy(plist);
    plist = NULL;
    
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Test01();
    return 0;
}