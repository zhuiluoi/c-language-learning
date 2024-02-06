#include "Slist.h"
#include <windows.h>
/* void SlistTest01()
{
    SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
    node1->data = 1;
    SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
    node2->data = 2;
    SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
    node3->data = 3;
    SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
    node4->data = 4;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
    SLTPrint(node1);
} */

void SlistTest01()
{
    SLTNode* plist = NULL;
    SLTPushBack(&plist, 1);
    SLTPushFront(&plist, 2);
    SLTPopFront(&plist);
    SLTPrint(plist);
    
}
void SlistTest02()
{
    SLTNode* plist = NULL;
    SLTPushFront(&plist, 2);
    SLTPushBack(&plist, 1);
    SLTPopBack(&plist);
    SLTPrint(plist);
    SLTNode* FindRet = SLTFind(plist, 2);
    if (FindRet)
    {
        printf("找到了!\n");
    }
    else
    {
        printf("没找到!\n");
    }
    SLTInsert(&plist, SLTFind(plist, 2), 3);
    SLTPrint(plist);
    SLTInsert(&plist, SLTFind(plist, 2), 4);
    SLTPrint(plist);
    SLTInsertAfter(SLTFind(plist, 2), 6);
    SLTPrint(plist);
    SLTErase(&plist, SLTFind(plist, 2));
    SLTPrint(plist);
    SLTEraseAfter(SLTFind(plist, 4));
    SLTPrint(plist);
    SLTErase(&plist, SLTFind(plist, 3));
    SLTPrint(plist);
    //SLTEraseAfter(SLTFind(plist, 4));
    //SLTPrint(plist);
    SListDesTroy(&plist);
    SLTPrint(plist);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SlistTest01();
    SlistTest02();
    return 0;
}
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* pos = head;
    while(pos->next)
    {
        if(pos->val == val)
        {
            if (head == pos)
            {
                head = head->next;
            }
            else
            {
                struct ListNode* prev = head;
                while (prev->next != pos)
                {
                    prev = prev->next;
                }
                prev->next = pos->next;
            }
        }
        
    }
}