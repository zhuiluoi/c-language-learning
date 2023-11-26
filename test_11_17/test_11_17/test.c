#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int main1()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
	do
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf(" 0:exit \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("输入有误\n");
		}
	} while (input);
	return 0;
}


#include <stdio.h>

int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
int main2()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;

	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		count = 0;
		for (int j = 0; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			result = arr[i];
			printf("%d ", result);
		}
		count = 0;
	}
	return 0;
}