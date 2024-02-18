#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int int_cmp(void* p1, void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void Swap(char* buf1, char* buf2, size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char temp;
		temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

void bubble(void* base, size_t size, size_t width, int(*cmp)(void*, void*))
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (cmp((char *)base + j * width , (char*)base + (j+1) * width) > 0)
			{
				Swap((char*)base + j * width,(char*)base + (j + 1) * width, width);
			}
		}
	}
}

void print_arr(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 2,4,6,8,1,3,9,5,7,0 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(arr[0]), int_cmp);
	print_arr(&arr, sz);
	return 0;
}