#define _CRT_SECURE_NO_WARNINGS 1

//��һ��C���Ժ���
//#include <stdio.h>
////����ͷ�ļ�
//
//int main()
//{
//	//printf�������Hello world!
//	printf("Hello world!\n");
//	return 0;
//}

//�⺯����printf����
//#include <stdio.h>
//
//int main()
//{
//	char s[] = "My name is Zhuiluo";
//	int n = 100;
//	float d = 3.14;
//	printf("Hello world!\n");
//	printf("%s\n", s);
//	printf("%d\n", n);
//	printf("%lf\n", d);
//	printf("%c\n", 'p');
//
//	return 0;
//}

//�ؼ���
//auto break case char const continue default do double else enum ex
//float for goto if int long register return short signed sizeof
//struct switch typedef union unsigned void volatile while

//�ַ���ASCII����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}

//�ַ�����\0
//#include <stdio.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };//arr1�����д��3���ַ�
//	char arr2[] = "abc"; //arr2�����д���ַ���
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//ת���ַ�
#include <stdio.h>
int main()
{
	printf("abc\ndef");
	return 0;
}