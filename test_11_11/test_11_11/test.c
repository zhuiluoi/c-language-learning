#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main1()
{
	unsigned long a;
	printf("%d\n",sizeof(a));
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));

	return 0;
}

#include <stdio.h>
int main2()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}

#include <stdio.h>

int main3() {
	char a[10001];
	while (gets(a))
	{
		int sz = 0;
		for (int i = 0; a[i]; i++)
		{
			sz++;
		}
		char* p = &a[sz - 1];
		for (int i = 0; i < sz; i++)
		{
			printf("%c", *p);
			p--;
		}
		printf("\n");
		

	}
	return 0;
}

#include <stdio.h>
void left_rotate_string(const char* s, int k)
{
	for (int i = k; s[i]; i++)
	{
		printf("%c", s[i]);
	}
	for (int i = 0; i < k; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

int main4() {
	char a[] = "ABCD";
	left_rotate_string(a, 1);
	left_rotate_string(a, 2);
	return 0;
}

int my_strlen(const char* p)
{
	int result = 0;
	for (int i = 0; p[i]; i++)
	{
		result += 1;
	}
	return result;
}

int main()
{
	char a[] = "ABCD";
	int b = my_strlen(a);
	printf("%d", b);
	return 0;
}
