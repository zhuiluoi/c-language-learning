#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main1()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	//10,9,8,7,6,5,4,3,2,1*
	int* ptr2 = (int*)(*(aa + 1));//10,9,8,7,6,*5,4,3,2,1
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	//5, 4, 3, 2, 1*
	int* ptr = (int*)(&a + 1);
	//5, *4, 3, 2, 1 
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}