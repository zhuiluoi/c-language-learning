#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// ת���ַ�(�������`������, escape character)

//int main()
//{
//	//   (are you ok??)
//	printf("(are you ok\?\?)\n");
//	//(are you ok]
//	//�ڹ�ȥ��һЩ�������ϣ�֧������ĸ
//	//??)  --- ]
//	//??(
//	return 0;
//}
//
//int main()
//{
//	//printf("%c\n", 'a');
//	//printf("%c\n", '\'');
//
//	//printf("%s\n", "abcdef");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("c:\\test\\test.c");
//
//	//printf("\a");
//	//printf("abcdefghi\n");
//	//printf("abcde\bfghi\n");
//	//abcdfghi
//
//	return 0;
//}
#include <string.h>

//int main()
//{
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x48');
//	//strlen�����ַ������ȵĺ���- ͳ�Ƶ����ַ�����\0֮ǰ���ַ��ĸ�����������\0
//	//string.h
//
//	printf("%zd\n", strlen("abc"));//abc\0
//	printf("%zd\n", strlen("c:\test\130\test.c"));//?
//
//
//	return 0;
//}

//
//C������һ��һ������乹�ɵ�
//ʲô����䣿
//(���Ʃ`�ȥ���, statement)

//int main()
//{
//	;//�����(null ���Ʃ`�ȥ���)
//	3 + 4;//���ʽ���(ʽ���Ʃ`�ȥ���)
//	int a = 10;
//	int b = 20;
//	a + b;//���ʽ���
//
//	printf("hehe\n");//�����������
//
//
//
//	return 0;
//}
//

//C���Է���ע���ǲ���Ƕ��ע�͵�


//int main()
//{
//	//�������ͱ���a������ֵ10
//	int a = 10;/* �������ͱ���a������ֵ10 */
//	/*
//	int b = 0;
//	int c = 0;
//	*/
//	return 0;
//}

//int main()
//{
//	int a/*hehe*/b;
//
//	return 0;
//}

//int main()
//{
//	/*char ch = 'w';*/
//	return 0;
//}


//int main()
//{
//	//1. C������0��ʾ�٣���0��ʾ��
//	if (2 == 1+1)
//		printf("hehe\n");
//
//	return 0;
//}
//

#include <stdbool.h>

//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//		printf("hehe\n");
//
//	return 0;
//}

//sizeof ����Ľ����������size_t, size_t��һ���޷��ŵ���������������ֵ�ڴ�ӡ��ʱ��ʹ��%zd
//int   --- %d
//char  --- %c
//�ַ��� -- %s

//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//
//	//printf("%zd\n", sizeof a);
//	//printf("%zd\n", sizeof(a));
//
//	//printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3.14));//double
//	printf("%zd\n", sizeof(3.14f));//float
//
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    short s = 2;//s��ռ2���ֽ�
//    int b = 10;
//    printf("%zd\n", sizeof(s = b + 1));
//    printf("s = %d\n", s);
//
//
//    return 0;
//}


//int main()
//{
//	//���� ������
//	int    age;
//	char ch;
//	float f;
//	double weight;
//	_Bool num;
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//��ʼ�� - �ڱ���������ͬʱ����һ��ֵ�г�ʼ��
//	char ch = 'q';
//
//	printf("%d\n", age);
//
//	return 0;
//}


//int main()
//{
//	int a;//����
//	a = 1;
//	printf("%d\n", a);
//
//	a = 20;
//	printf("%d\n", a);
//
//	return 0;
//}


//int b = 100;//ȫ�ֱ���
//
//int main()
//{
//	{
//		int a = 10;//�ֲ�����
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//
//	return 0;
//}


//int b = 100;//ȫ�ֱ���
//
//int main()
//{
//	{
//		int a = 10;//�ֲ�����
//		printf("%d\n", b);
//	}
//	printf("%d\n", b);
//
//	return 0;
//}


int a = 100;//ȫ�ֱ���

int main()
{
	{
		int a = 10;//�ֲ�����
		printf("%d\n", a);//10
	}

	return 0;
}