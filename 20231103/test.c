/*#include <stdio.h>


int Fun(int n)      
{ 
if(n==5)   
return 2;     
else     
return 2*Fun(n+1);      
}

int main()
{
printf("%d", Fun(2));
return 0;
}*/

/*#include <stdio.h>

int Fib(int n)
{
if(n == 1)
{
return 1;
}
else if(n == 2)
{
return 1;
}
else
{
return Fib(n - 1) + Fib(n - 2);
}

}

int main()
{
printf("Fib(5)=%d\n", Fib(5));
printf("Fib(10)=%d\n", Fib(10));
printf("Fib(2)=%d\n", Fib(2));
return 0;
}*/

/*#include <stdio.h>
int Fib(int n)
{
int a1 = 1;
int a2 = 1;
int temp = 0;
for(int i=0;i<n-2;i++){
temp = a2;
a2 = a1 + a2;
a1 = temp;
}
return a2;
}
int main()
{
printf("Fib(5)=%d\n", Fib(5));
printf("Fib(10)=%d\n", Fib(10));
printf("Fib(2)=%d\n", Fib(2));
return 0;
}
*/
/*#include <stdio.h>

int power(int n, int k)
{
if(k == 1)
{
return n;
}
else
{
return n * power(n, k-1);
}
}

int main()
{
int n, k;
scanf("%d %d", &n, &k);
printf("%d^%d=%d\n", n, k, power(n, k));
return 0;
}*/

/*#include <stdio.h>

int DigitSum(int n)
{
if(n / 10 == 0)
{
return n % 10;
}
else
{
return (n % 10) + DigitSum(n / 10);
}
}

int main()
{
printf("Fib(1729)=%d\n", DigitSum(1729));
return 0;
}*/

/*#include <stdio.h>

int fact(int n)
{
if(n == 1)
{
return 1;
}
else
{
return n * fact(n - 1);
}
}

int main()
{
printf("fact(5)=%d\n", fact(5));
return 0;
}*/

/*#include <stdio.h>

int fact(int n)
{
int result = 1;
for(int i=1;i<=n;i++){
result *= i;
}
return result;
}
int main()
{
printf("fact(6)=%d\n", fact(6));
return 0;
}*/

#include <stdio.h>

void DigitPrint(int n)
{
	if(n / 10 != 0)
	{
		DigitPrint(n / 10);
	}
	
	printf("%d", n % 10);
}

int main()
{
	DigitPrint(1729);
	return 0;
}
