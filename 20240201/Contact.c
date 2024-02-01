#include "SeqList.h"

void InitContact(contact* con)
{
    SLInit(con);
    LoadContact(con);
};

void DestroyContact(contact* con)
{
    SaveContact(con);
    SLDestroy(con);
};

void AddContact(contact* con)
{
    PeoInfo info;
    printf("请输入联系人姓名: \n");
    scanf("%s", info.name);
    printf("请输入联系人年龄: \n");
    scanf("%d", &info.age);
    printf("请输入联系人性别: \n");
    scanf("%s", info.sex);
    printf("请输入联系人电话: \n");
    scanf("%s", info.tel);
    printf("请输入联系人住址: \n");
    scanf("%s", info.addr);

    SLPushBack(con, info);
};

int FindByName(contact* con, char name[])
{
    for (int i = 0; i < con->size; i++)
    {
        if (strcmp(con->a[i].name, name) == 0)
        {
            return i;
        }
        
    }
    return -1;
    
};

void FindContact(contact* con)
{
    printf("请输入要查找的联系人姓名:\n");
    char name[NAME_MAX];
    scanf("%s", name);
    int ret = FindByName(con, name);
    if (ret < 0)
    {
        printf("要查找的联系人不存在\n");
        return;
    }
    printf("找到了！\n");
    printf("%-12s %-6s %-6s %-17s %-22s\n", "姓名", "性别", "年龄", "电话", "住址");
    printf("%-10s %-4s %-4d %-15s %-20s\n",
            con->a[ret].name,
            con->a[ret].sex,
            con->a[ret].age,
            con->a[ret].tel,
            con->a[ret].addr
            );
};

void DelContact(contact* con)
{
    printf("请输入要删除的联系人姓名:\n");
    char name[NAME_MAX];
    scanf("%s", name);
    int ret = FindByName(con, name);
    if (ret < 0)
    {
        printf("要删除的联系人不存在\n");
        return;
    }
    SLErase(con, ret);
    printf("删除成功！\n");
};

void ModifyContact(contact* con)
{
    printf("请输入要修改的联系人姓名:\n");
    char name[NAME_MAX];
    scanf("%s", name);
    int ret = FindByName(con, name);
    if (ret < 0)
    {
        printf("要修改的联系人不存在\n");
        return;
    }
    printf("请输入联系人姓名: \n");
    scanf("%s", con->a[ret].name);
    printf("请输入联系人年龄: \n");
    scanf("%d", &con->a[ret].age);
    printf("请输入联系人性别: \n");
    scanf("%s", con->a[ret].sex);
    printf("请输入联系人电话: \n");
    scanf("%s", con->a[ret].tel);
    printf("请输入联系人住址: \n");
    scanf("%s", con->a[ret].addr);
    printf("修改成功！\n");
};

void ShowContact(contact* con)
{
    printf("%-12s %-6s %-6s %-17s %-22s\n", "姓名", "性别", "年龄", "电话", "住址");
    for (int i = 0; i < con->size; i++)
    {
        printf("%-10s %-4s %-4d %-15s %-20s\n",
            con->a[i].name,
            con->a[i].sex,
            con->a[i].age,
            con->a[i].tel,
            con->a[i].addr
            );
    }
    
};

void LoadContact(contact* con)
{
    FILE* pf = fopen("contact.txt", "rb");
    if (pf == NULL)
    {
        perror("fopen error!\n");
        return;
    }

    PeoInfo info;
    while (fread(&info, sizeof(PeoInfo), 1, pf))
    {
        SLPushBack(con, info);
    }
    printf("导入成功!");
}

void SaveContact(contact* con)
{
    FILE* pf = fopen("contact.txt", "wb");
    if (pf == NULL)
    {
        perror("fopen error!\n");
        return;
    }

    for (int i = 0; i < con->size; i++)
    {
        fwrite(con->a + i, sizeof(PeoInfo), 1, pf);
    }
    
    printf("保存成功!");
}