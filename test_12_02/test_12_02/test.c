#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
union Un
{
	short s[7];//2 8 2
	int n;//4 8 4
	//14 4 16
};
int main1()
{
	printf("%zd\n", sizeof(union Un));
	return 0;
}

typedef struct {
	int a;//4 8 4
	char b;//1 8 1
	short c;//2 8 2
	short d;//2 8 2
}AA_t;

//0 1 2 3 4 5 6 7 8 9 x x x
//4
//12

int main2()
{
	printf("%zd\n", sizeof(AA_t));
	return 0;
}


#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//假设long 是4个字节
int main3(int argc, char* argv[])
{
    struct tagTest1
    {
        short a;
        char d;
        long b;
        long c;
    };
    struct tagTest2
    {
        long b;
        short c;
        char d;
        long a;
    };
    struct tagTest3
    {
        short c;
        long b;
        char d;
        long a;
    };
    struct tagTest1 stT1;
    struct tagTest2 stT2;
    struct tagTest3 stT3;

    printf("%zd %zd %zd", sizeof(stT1), sizeof(stT2), sizeof(stT3));
    return 0;
}
#pragma pack()

struct _Record_Struct
{
    unsigned char Env_Alarm_ID : 4;
    unsigned char Para1 : 2;
    unsigned char state;
    unsigned char avail : 1;
}*Env_Alarm_Record;
//2 4 | 8 | 1
int main4()
{
    printf("%zd\n", sizeof(struct _Record_Struct));
    return 0;
}
#include<stdio.h>
int main5()
{
    union
    {
        short k;//2
        char i[2];//2
    }*s, a;
    s = &a;
    //00 00
    s->i[0] = 0x39;
    s->i[1] = 0x38;
    //38 39
    printf("%x\n", a.k);
    return 0;
}

int main6()
{
    enum ENUM_A
    {
        X1,//0
        Y1,//1
        Z1 = 255,
        A1,
        B1,
    };
    enum ENUM_A enumA = Y1;
    enum ENUM_A enumB = B1;
    printf("%d %d\n", enumA, enumB);
}

int main7()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;//00000010
    pstPimData->ucData0 = 3;//0000001|1
    pstPimData->ucData1 = 4;//000001|00
    pstPimData->ucData2 = 5;//00000|101
    //0000 0000 00|00 0|00|0 00000000 00000000
    //0000 0010 00|10 1|00|1 00000000 00000000
    //02 29 00 00
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}

struct A
{
    int a;//4 4 4
    short b;//2 4 2
    int c;//4 4 4
    char d;//1 4 1
};//4
//0 1 2 3 4 5 6 7 8 9 10 11 12
//13
//16
struct B
{
    int a;
    short b;
    char c;
    int d;
};
//0 1 2 3 4 5 6 7 8 9 10 11
//12

int check_sys()
{
    union
    {
        int i;
        char c;
    }un;
    un.i = 1;
    return un.c;
}

int main()
{
    int a = check_sys();
    if (a)
    {
        printf("小端");
    }
    else
    {
        printf("大端");
    }
    return 0;
}
