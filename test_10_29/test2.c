/*#include <stdio.h>

int bin_search(int arr[], int left, int right, int key)
{
while (left <= right)
{
int mid = left + (right - left) / 2;

if (arr[mid] == key)
return mid;
if (arr[mid] < key)
left = mid + 1;
else
right = mid - 1;
}
return -1;
}

int main() {
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr) / sizeof(arr[0]);
int key = 10;
int result = bin_search(arr, 0, n - 1, key);

if (result != -1)
printf("找到了下标为 %d", result);
else
printf("没找到");
return 0;
}*/
