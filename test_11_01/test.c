/*#include <stdio.h>

int main()
{
printf("hehe");

return 0;
}

#include <stdio.h>
int main()
{
int i = 0;
int arr[] = {1,2,3,4,5,6,7,8,9,10};
for(i=0; i<=12; i++)
{
arr[i] = 0;
printf("hello bit\n");
}
return 0;
}*/

/*#include <stdio.h>
int main()
{
int result = 0;
int empty_b = 0;
int money = 20;
while(money){
if(empty_b == 2)
{
result += 1;
empty_b = 1;
}
else
{
empty_b += 1;
result += 1;
money -= 1;
}
}
printf("%d瓶", result);
return 0;
}*/

/*#include <stdio.h>


void print_d(int n, int i)
{
for(int j=0;j<n-i;j++){
printf(" ");
}
for(int m=0;m<2*i+1;m++){
printf("*");
}
printf("\n");
}

int main()
{
int n = 7;
for(int i=0;i<n;i++){
print_d(n, i);
}

for(int i=n;i>=0;i--){
print_d(n, i);
}


return 0;
}*/

/*#include <stdio.h>

int main()
{
int temp = 0;
int digits = 0;
int sum = 0;
int indigestion = 1;
int n = 0;

for(int i=0;i<=100000;i++)
{
temp = i;
digits = 0;
sum = 0;

while(temp > 0){
temp /= 10;
digits++;
}


temp = i;
while(temp > 0)
{
indigestion = 1;

n = temp % 10;

for(int j=1;j<=digits;j++){
indigestion *= n;
}
sum += indigestion;

temp /= 10;
}

if(sum == i){
printf("%d ", i);
}

}
return 0;
}*/


#include <stdio.h>

int main()
{
	int sum = 0;
	int a = 2;
	int temp = 0;
	for(int i=1;i<=5;i++)
	{
		temp = a;
		for(int j=0;j<i;j++){
			sum += temp;
			temp *= 10;
		}
	}
	printf("%d", sum);
	return 0;
}
