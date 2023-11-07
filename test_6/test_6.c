/*#include <stdio.h>

void multiplication() {
for (int i = 1; i <= 9; i++) {
for (int j = 0; j <= 9; j++) {
printf("%dx%d=%2d ", i, j, i * j);
}
printf("\n");
}
}

int main() {
multiplication();
return 0;
}*/

/*#include <stdio.h>
int Leap_Year(int x)
{
if((x % 4 == 0) & (x % 100 != 0)){
return 1;
}
else if((x % 400 == 0)){
return 1;
}
else
return 0;
}

int main()
{
int a = 0;
scanf("%d", &a);
if(Leap_Year(a)){
printf("%d年是闰年", a);
}
else
{
printf("%d年不是闰年", a);
}
return 0;
}*/

/*#include <stdio.h>

int is_prime(int a)
{
for(int i=2;i<a;i++){
if(a % i == 0){
return 0;
}
}
return 1;
}

int main()
{
for(int i=101;i<=200;i++){
if(is_prime(i)){
printf("%d ", i);
}
}
printf("\n");
return 0;
}*/

#include <stdio.h>

void init(int a[], int len)
{
	
	for(int i=0;i<len;i++){
		a[i] = 0;
	}

}

void print(int a[], int len)
{
	for(int i=0;i<len;i++){
		printf("%d\n", a[i]);
	}
}

void reverse(int a[], int len)
{
	for(int i = 0; i < len / 2; i++) {
		int temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}


int main()
{
	
	int a[] = {1, 2, 3, 4};
	int len = sizeof(a) / sizeof(a[0]);
	print(a, len);
	init(a, len);
	print(a, len);
	int b[] = {1, 2, 3, 4};
	len = sizeof(b) / sizeof(b[0]);
	reverse(b, len);
	print(b, len);

	return 0;
}
