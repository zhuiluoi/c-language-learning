#define _CRT_SECURE_NO_WARNINGS 1

//第一个C语言函数
//#include <stdio.h>
////引用头文件
//
//int main()
//{
//	//printf函数输出Hello world!
//	printf("Hello world!\n");
//	return 0;
//}

//库函数和printf函数
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

//关键字
//auto break case char const continue default do double else enum ex
//float for goto if int long register return short signed sizeof
//struct switch typedef union unsigned void volatile while

//字符和ASCII编码
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

//字符串和\0
//#include <stdio.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };//arr1数组中存放3个字符
//	char arr2[] = "abc"; //arr2数组中存放字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//转义字符
#include <stdio.h>
int main()
{
	printf("abc\ndef");
	return 0;
}