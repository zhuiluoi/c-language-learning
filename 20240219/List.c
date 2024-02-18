#include "List.h"

LTNode* LTInit()
{
    LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
    if (phead == NULL)
    {
        perror("malloc fail!");
        exit(1);
    }
    phead->data = -1;
    phead->prev = phead->next = phead;

    return phead;
};

bool LTEmpty(LTNode* phead)
{
    return phead->next == phead;
};

LTNode* BuyNode(LTDataType x)
{
    LTNode* newNode = (LTNode*)malloc(sizeof(LTNode));
    if (newNode == NULL)
    {
        perror("malloc fail!");
        exit(1);
    }
    newNode->data = x;
    newNode->prev = newNode->next = newNode;
    return newNode;
}

void LTPrint(LTNode* phead)
{
    assert(phead);
    if (LTEmpty(phead))
    {
        printf("链表为空！");
        return;
    }
    
    LTNode* pcur = phead->next;
    while (pcur != phead)
    {
        printf("%d->", pcur->data);
        pcur = pcur->next;
    }
    printf("\n");
};


void LTPushBack(LTNode* phead, LTDataType x)
{
    assert(phead);
    LTNode* newNode = BuyNode(x);
    newNode->prev = phead->prev;
    newNode->next = phead;
    phead->prev->next = newNode;
    phead->prev = newNode;
    
};

void LTPushFront(LTNode* phead, LTDataType x)
{
    assert(phead);
    LTNode* newNode = BuyNode(x);
    newNode->next = phead->next;
    newNode->prev = phead;
    phead->next->prev = newNode;
    phead->next = newNode;
};

void LTPopBack(LTNode* phead)
{
    assert(phead);
    assert(!LTEmpty(phead));
    LTNode* del = phead->prev;
    LTNode* prev = del->prev;
    prev->next = phead;
    phead->prev = prev;
    free(del);
    del = NULL;
};

void LTPopFront(LTNode* phead)
{
    assert(phead);
    assert(!LTEmpty(phead));
    LTNode* del = phead->next;
    LTNode* next = del->next;
    next->prev = phead;
    phead->next = next;
    free(del);
    del = NULL;
};

LTNode *LTFind(LTNode* phead,LTDataType x)
{
    assert(phead);
    assert(!LTEmpty(phead));

    LTNode* pcur = phead->next;

    while (pcur != phead)
    {
        if (pcur->data == x)
        {
            return pcur;
        }
        pcur = pcur->next; 
    }
    return NULL;
};


void LTInsert(LTNode* pos, LTDataType x)
{
    assert(pos);

    LTNode* newNode = BuyNode(x);

    newNode->next = pos->next;
    newNode->prev = pos;
    pos->next->prev = newNode;
    pos->next = newNode;
};

void LTErase(LTNode* pos)
{
    assert(pos);
    pos->prev->next = pos->next;
    pos->next->prev = pos->prev;
    free(pos);
    pos = NULL;
};

void LTDestroy(LTNode* phead)
{
    assert(phead);

    LTNode* pcur = phead->next;
    while (pcur != phead)
    {
        LTNode* next = pcur->next;
        free(pcur);
        pcur = next;
    }

    free(phead);
    phead = NULL;
    
};