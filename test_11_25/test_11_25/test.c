#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main1()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf( "%d %d" , a + b, c);
//	return 0;
//}
//
//int main2()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
////-1, -2, -3, ......., -128,  127, 126, ......., 0
////255个数,0
//
//#include <stdio.h>
//int main3()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	//00332211
//	//11223300
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//	//小端 01 00 00 00
//	// 01
//	//大端 00 00 00 01
//	// 00
//}
//
//int main4()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//
//
//
//int main5()
//{
//	unsigned int a = 0x1234;
//	//32位 12 34
//	//12
//	unsigned char b = *(unsigned char*)&a;
//	printf("%x\n", b);
//	return 0;
//}
//#include <stdio.h>
//
//char* my_strncpy(char* destination, const char* source, size_t num)
//{
//	size_t i = 0;
//	for (i = 0; i < num; i++)
//	{
//		destination[i] = source[i];
//	}
//	destination[i] = '\0';
//
//}
//
//
//int main6() {
//	char src[] = "Hello, world!";
//	char dest[20];
//
//	my_strncpy(dest, src, 10);
//
//	printf("%s\n", src);
//	printf("%s\n", dest);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//char* my_strncat(char* to, char* from, size_t num)
//{
//	size_t i = strlen(to);
//	strncpy(&to[i], from, num);
//	if (to[i + num] != '\0')
//	{
//		to[i + num] = '\0';
//	}
//	return to;
//}
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	my_strncat(str1, str2, 9);
//	printf("%s\n", str1);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy(void* dst, const void* src, size_t count)
//{
//	void* ret = dst;
//	assert(dst);
//	assert(src);
//
//	while (count--) {
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return(ret);
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


#include <stdio.h>
#include <string.h>

void* my_memmove(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	if (dst <= src || (char*)dst >= ((char*)src + count)) {
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else {
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return(ret);
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
