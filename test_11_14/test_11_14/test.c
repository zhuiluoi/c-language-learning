#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main1()
{
	int* p = NULL;
	int arr[10] = { 0 };
	p = &arr[0];
	return 0;
}

#include <stdio.h>

void Print(const int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}

int main2()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	return 0;
}

void bubbling_sort(int* arr, int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main3()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbling_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>

void odd_even_sort(int* arr, int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{

			if ((arr[j] % 2 == 0) && (arr[j + 1] % 2 != 0))
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	odd_even_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}