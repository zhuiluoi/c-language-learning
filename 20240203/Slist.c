#include "Slist.h"

void SLTPrint(SLTNode* phead)
{
    SLTNode* pcur = phead;
    while (pcur)
    {
        
        printf("%d->", pcur->data);
        pcur = pcur->next;

    }
    printf("NULL\n");
};

SLTNode* SLTBuyNode(SLTDataType x)
{
    SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
    if (newNode == NULL)
    {
        perror("malloc fail!");
        exit(1);
    }
    

    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}


void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
    assert(pphead);

    SLTNode* newNode = SLTBuyNode(x);

    if (*pphead == NULL)
    {
        *pphead = newNode;
        return;
    }

    SLTNode* ptail = *pphead;
    while (ptail->next)
    {
        ptail = ptail->next;
    }

    ptail->next = newNode;
    
};

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
    assert(pphead);

    SLTNode* newNode = SLTBuyNode(x);

    newNode->next = *pphead;
    *pphead = newNode;
};

void SLTPopBack(SLTNode** pphead)
{
    assert(pphead);
    assert(*pphead);

    if ((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
        return;
    }

    SLTNode* ptail = *pphead;
    SLTNode* prev = NULL;
    while (ptail->next)
    {
        prev = ptail;
        ptail = ptail->next;
    }
    free(ptail);
    ptail = prev->next = NULL;  
};

void SLTPopFront(SLTNode** pphead)
{
    assert(pphead);
    assert(*pphead);

    SLTNode* prev = *pphead;
    *pphead = (*pphead)->next;
    free(prev);
    prev = NULL;
};

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
    assert(phead);
    while (phead)
    {
        if (phead->data == x)
        {
            return phead;
        }
        phead = phead->next;
    }
    return NULL;
};

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
    assert(pphead);
    assert(pos);

    SLTNode* newNode = SLTBuyNode(x);

    if (*pphead == pos)
    {
        SLTPushFront(pphead, x);
        return;
    }
    

    SLTNode* prev = *pphead;
    while (prev->next != pos)
    {
        prev = prev->next;
    }
    prev->next = newNode;
    newNode->next = pos;
    
};

void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
    assert(pos);
    SLTNode* newNode = SLTBuyNode(x);
    newNode->next = pos->next;
    pos->next = newNode;

};

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
    assert(pphead);
    assert(*pphead);
    assert(pos);

    if (*pphead == pos)
    {
        SLTPopFront(pphead);
        return;
    }

    SLTNode* prev = *pphead;
    while (prev->next != pos)
    {
        prev = prev->next;
    }
    prev->next = pos->next;
    free(pos);
    pos = NULL;
};

void SLTEraseAfter(SLTNode* pos)
{
    assert(pos->next);
    assert(pos);
    SLTNode* posNext = pos->next;
    pos->next = posNext->next;
    free(posNext);
    posNext = NULL;
};

void SListDesTroy(SLTNode** pphead)
{
    assert(pphead);

    SLTNode* pcur = *pphead;
    
    while (pcur)
    {
        SLTNode* pcurNext = pcur->next;
        free(pcur);
        pcur = pcurNext;
    }
    *pphead = pcur = NULL;
    
};
