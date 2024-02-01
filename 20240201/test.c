/* #include "SeqList.h"
#include <windows.h>

void slTest01()
{
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    SLInsert(&sl, 3, 5);
    SLErase(&sl, 3);
    SLPrint(&sl);
}

void slTest02()
{
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    int ret = SLFind(&sl, 3);
    if (ret < 0)
    {
        printf("数据不存在，查找失败\n");
    }
    else
    {
        printf("找到了，在%d位置\n", ret);
    }
    
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    slTest01();
    slTest02();
    return 0;
} */