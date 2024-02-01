#include "SeqList.h"

void SLInit(SL* ps)
{
    ps->a = NULL;
    ps->capacity = ps->size = 0;
};

void SLDestroy(SL* ps)
{
    assert(ps);
    if (ps->a)
    {
        free(ps->a);
    }
    
    ps->a = NULL;
    ps->capacity = ps->size = 0;
};

void SLCheckCapacity(SL* ps)
{
    if (ps->capacity == ps->size)
    {
        int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
        SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));

        if (tmp == NULL)
        {
            perror("realloc fail!");
            exit(1);
        }

        ps->a = tmp;
        ps->capacity = newCapacity;
        
    }
};

void SLPrint(SL* ps)
{
    for (int i = 0; i < ps->size; i++)
    {
        printf("%d ", ps->a[i]);
    }
    printf("\n");
};

void SLPushBack(SL* ps, SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    ps->a[ps->size++] = x;
};

void SLPushFront(SL* ps, SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    for (int i = ps->size; i > 0 ; i--)
    {
        ps->a[i] = ps->a[i-1];
    }
    ps->a[0] = x;
    ps->size++;
};

void SLPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size);
    ps->size--;
};

void SLPopFront(SL* ps)
{
    assert(ps);
    assert(ps->size);
    for (int i = 0; i < ps->size-1; i++)
    {
        ps->a[i] = ps->a[i+1];
    }
    ps->size--;
    
};

void SLInsert(SL* ps, int pos, SLDataType x)
{
    assert(ps);
    assert(pos >= 0 && pos <= ps->size);
    SLCheckCapacity(ps);
    for (int i = ps->size; i > pos ; i--)
    {
        ps->a[i] = ps->a[i-1];
    }
    ps->a[pos] = x;
    ps->size++;
};

void SLErase(SL* ps, int pos)
{
    assert(ps);
    assert(ps->size);
    assert(pos >= 0 && pos <= ps->size);
    for (int i = pos; i < ps->size-1; i++)
    {
        ps->a[i] = ps->a[i+1];
    }
    ps->size--;
};

/* int SLFind(SL* ps, SLDataType x)
{
    for (int i = 0; i < ps->size; i++)
    {
        if (ps->a[i] == x)
        {
            return i;
        }
        
    }
    return -1;
}; */