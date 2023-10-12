#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////------------arithmetic operator
////---add, subtract, multiply and divide
//int main()
//{
//	int a, b;
//	a = 10;
//	b = 8;
//	double c = 8.0;
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a * b);
//	printf("a / b = %d\n", a / b); //divide exactly without remainder (in integer arithmetic)
//	printf("a / c = %lf\n", a / c);//floating point division
//	printf("a % b = %d\n", a % b);//take a mold
//	return 0;
//
//	//  = is assignment operator
//}

////-----------sequential assignment
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	c = b = a + 3; //c = 4
//	printf("%d\n", c);
//	return 0;
//	//<------------right-to-left
//}

////------------compound assignment
//int main()
//{
//	int a = 3;
//	printf("%d\n", a += 2);
//	return 0;
//}
///*	* += -=
//	*= /= %=
//	>>= <<=
//	&= |= ^=	*/


// ++、--、+、-

//forced type conversion
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//------scanf and printf

//int main(void)
//{
//	printf("Hello World");
//	return 0;
//}

//---------placeholder
//#include <stdio.h>
//int main()
//{
//	printf("There are %d apples\n", 3);
//	return 0;
//}

/*
• %a ：⼗六进制浮点数，字⺟输出为⼩写。
• %A ：⼗六进制浮点数，字⺟输出为⼤写。
• %c ：字符。
• %d ：⼗进制整数。
• %e ：使⽤科学计数法的浮点数，指数部分的 e 为⼩写。
• %E ：使⽤科学计数法的浮点数，指数部分的 E 为⼤写。
• %i ：整数，基本等同于 %d 。
• %f ：⼩数（包含 float 类型和 double 类型）。
• %g ：6个有效数字的浮点数。整数部分⼀旦超过6位，就会⾃动转为科学计数法，指数部分的 e为⼩写。
• %G ：等同于 %g ，唯⼀的区别是指数部分的 E 为⼤写。
• %hd ：⼗进制 short int 类型。
• %ho ：⼋进制 short int 类型。
• %hx ：⼗六进制 short int 类型。
• %hu ：unsigned short int 类型。
• %ld ：⼗进制 long int 类型。
• %lo ：⼋进制 long int 类型。
• %lx ：⼗六进制 long int 类型。
• %lu ：unsigned long int 类型。
• %lld ：⼗进制 long long int 类型。
• %llo ：⼋进制 long long int 类型。
• %llx ：⼗六进制 long long int 类型。
• %llu ：unsigned long long int 类型。
• %Le ：科学计数法表⽰的 long double 类型浮点数。
• %Lf ：long double 类型浮点数。
• %n ：已输出的字符串数量。该占位符本⾝不输出，只将值存储在指定变量之中。
• %o ：⼋进制整数。
• %p ：指针。
• %s ：字符串。
• %u ：⽆符号整数（unsigned int）。
• %x ：⼗六进制整数。
• %zd ： size_t 类型。
• %% ：输出⼀个百分号。*/

/*
- %a: Floating point number of the Decade of Sixths, mothers are output in small letters.
- %A: Floating point number in the Decade, mothers are output in uppercase.
- %c: Characters.
- %d: Decimal integer. %e: Floating-point number using scientific notation.
- %e: Floating-point number using scientific notation, with the e in the exponent part written in small letters.
- %E: Floating-point number using scientific notation; the E in the exponent is uppercase.
- %i : Integer, basically equivalent to %d.
- %f : Small numbers (both float and double types).
- %g : Floating point number with 6 significant digits. The integer part is automatically converted to scientific notation once it exceeds 6 digits, and the e in the exponent part is written in small letters.e in the exponent is small.
- %G: Equivalent to %g, except that the E in the exponent is capitalized.
- %G: Equivalent to %g, except that the E in the exponent is written in uppercase. %hd: Type of the Decade short int.
- %ho: Decimal short int type. %hx: Hexadecimal short int type.
- %hx: Decimal short int type. %hu: Unsigned short int type.
- %hx: Decimal short int type. %hu: Unsigned short int type. %ld: Decimal long int type.
- %hx: unsigned short int type. %hu: unsigned short int type. %ld: Decimal long int type.
- %lo : Decimal long int type. %lx : Decimal hexadecimal short int type. %hx : Unsigned short int type.
- %lx : Decade long int type. %lu : unsigned long int type. %lx : Decade long int type.
- %lu: unsigned long int type. %lld: Decimal long int type.
- %lld : Decimal long long int type. %llo : Decimal long int type.
- %llo : Decimal long long int type. %llx : Decimal hexadecimal long long int type. %lv : Decimal long long int type.
- %llx : Decimal long long int type. %llu : Unsigned long long int type. %llu : Unsigned long long int type.
- %llu : Unsigned long long int type. %Le : Scientific notation type.
- %Le: Floating-point numbers of type long double in scientific notation. %Lf: Floating-point numbers of type long double.
- %Lf: Floating point number of long double type.
- %n: Number of strings output. The placeholder itself is not output, but the value is stored in the specified variable.
- %o : decimal integer.
- %p : Pointer.
- %s : String.
- %u : unsigned int. %x : Decimal integer.
- %x : Decimal integer. %zd : Size_t type.
- %zd : size_t type.
- %% : output a percent sign.*/

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//finite width
//		}
//		printf("\n");
//	};
//	return 0;
//}

/*
1*1= 1 1*2= 2 1*3= 3 1*4= 4 1*5= 5 1*6= 6 1*7= 7 1*8= 8 1*9= 9
2*1= 2 2*2= 4 2*3= 6 2*4= 8 2*5=10 2*6=12 2*7=14 2*8=16 2*9=18
3*1= 3 3*2= 6 3*3= 9 3*4=12 3*5=15 3*6=18 3*7=21 3*8=24 3*9=27
4*1= 4 4*2= 8 4*3=12 4*4=16 4*5=20 4*6=24 4*7=28 4*8=32 4*9=36
5*1= 5 5*2=10 5*3=15 5*4=20 5*5=25 5*6=30 5*7=35 5*8=40 5*9=45
6*1= 6 6*2=12 6*3=18 6*4=24 6*5=30 6*6=36 6*7=42 6*8=48 6*9=54
7*1= 7 7*2=14 7*3=21 7*4=28 7*5=35 7*6=42 7*7=49 7*8=56 7*9=63
8*1= 8 8*2=16 8*3=24 8*4=32 8*5=40 8*6=48 8*7=56 8*8=64 8*9=72
9*1= 9 9*2=18 9*3=27 9*4=36 9*5=45 9*6=54 9*7=63 9*8=72 9*9=81*/


//#include <stdio.h>
//int main()
//{
//	printf("%6.2f\n", 0.5);
//	return 0;
//}
////" 0.50"


//#include <stdio.h>
//int main()
//{
//	printf("%*.*f\n", 6, 2, 0.5);
//	return 0;
//}
////=printf("%6.2f\n", 0.5);

//#include <stdio.h>
//int main()
//{
//	printf("%.5s\n", "hello world");
//	return 0;
//}
//// ->hello

//------------scanf

//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	printf("Please enter a score:");
//	scanf("%d", &score);
//	printf("The score is：%d\n", score);
//	return 0;
//}

/*
%c ：字符。
• %d ：整数。
• %f ： float 类型浮点数。
• %lf ： double 类型浮点数。
• %Lf ： long double 类型浮点数。
• %s ：字符串。
• %[] ：在⽅括号中指定⼀组匹配的字符（⽐如 %[0-9] ），遇到不在集合之中的字符，匹配将会
停⽌。*/

/*
%c : Characters.
- %d : Integer.
- %f : float type floating point number.
- %lf : double type float. %Lf : long double type float.
- %Lf : long double type float. %s : string.
- %s : String.
- %[] : Specify a set of matching characters (such as %[0-9]) in the square brackets.
When encountering characters that are not in the set, the matching will stop.*/

//#include <stdio.h>
//int main()
//{
//	char name[11];
//	scanf("%10s", name);
//	printf("%s", name);
//	return 0;
//}

//------------if

//#include <stdio.h>
//int main()
//{
// int num = 0;
// scanf("%d", &num);
// if(num % 2 == 1)
// printf("%d 是奇数\n", num);
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);
//	else
//		printf("%d 是偶数\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输⼊的数字是0\n");
//	else if (num > 0) //这⾥的if 相当于嵌套在els语句中，形成了嵌套结构
//		printf("输⼊的数字是正数\n");
//	else
//		printf("输⼊的数字是负数\n");
//
//	return 0;
//}


//The hanging else problem
//If there is more than one if and else, remember the rule that else always follows the closest if.
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5; // a = 5
//	c = ++a; //c=5+1=6 a=6
//	b = ++c, c++, ++a, a++;//b=7 c=7, c=8, a=7, a=8;
//	b += a++ + c; //b = 7 + 8 + 8 = 23, a=9 , c=8
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a == b) {
//            printf("%d=%d\n", a, b);
//        }
//        else if (a > b) {
//            printf("%d>%d\n", a, b);
//        }
//        else {
//            printf("%d<%d\n", a, b);
//        }
//
//    }
//    return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				printf("%d %d %d", a, b, c);
//			}
//			else
//			{
//				printf("%d %d %d", a, c, b);
//			}
//		}
//		else
//		{
//			printf("%d %d %d", c, a, b);
//		}
//	}
//	else
//	{
//		if (b < c)
//		{
//			printf("%d %d %d", c, b, a);
//		}
//		else
//		{
//			if (a < c)
//			{
//				printf("%d %d %d", b, c, a);
//			}
//			else
//			{
//				printf("%d %d %d", b, a, c);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a < b) {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//
//    if (b < c) {
//        int temp = b;
//        b = c;
//        c = temp;
//    }
//
//    if (a < b) {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//
//    printf("%d %d %d", a, b, c);
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("positive\n");
//	}
//	if (a < 0)
//	{
//		printf("negative\n");
//	}
//	if (a % 2 == 0)
//	{
//		printf("even\n");
//	}
//	if (a % 2 != 0)
//	{
//		printf("odd\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
    char a[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 ,'\0'};
    for (int i = 0; a[i]; i++) {
        printf("%c", a[i]);
    }
}