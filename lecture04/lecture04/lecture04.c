#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//	{
//		printf("负数\n");
//	}
//	return 0;
//}

/*
• > ⼤于运算符
• < ⼩于运算符
• >= ⼤于等于运算符
• <= ⼩于等于运算符
• == 相等运算符
• != 不相等运算符
*/

/*
- > Greater Than Operators
- < Smaller than Operator
- >= greater than or equal to operator
- <= Smaller than Equal Operator
- == Equivalence Operator
- != unequal operator
*/

//------------ exp1 ? exp2 : exp3
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	printf("%d\n", m);
//
//	return 0;
//}

//------------------------Logical operators: && , || , !
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		printf("是闰年\n");
//
//	return 0;
//}


//-----------------switch

/*
switch (expression) {
case value1: statement
case value2: statement
default: statement
}*/

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("整除，余数为0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//		case 1：
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("⼯作⽇\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息⽇\n");
//			break;
//		default:
//			printf("输⼊错误\n");
//			break;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d, e, f, g, h, i, j;
//	scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
//	int arr[11] = { a, b, c, d, e, f, g, h, i, j , '\0'};
//
//	int max = arr[0];
//	for (int i = 0; arr[i]; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("Max = %d", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    double c = 0;
//
//    for (int i = 1; i <= 100; i++) {
//        if (i % 2 == 1) {
//            c += 1.0 / i;
//        }
//        else {
//            c -= 1.0 / i;
//        }
//    }
//
//    printf("c = %lf", c);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		};
//	};
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	for (int i = 1; i < 101; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	};
//	printf("%d", count);
//	return 0;
//}

#include <stdio.h>

int func(int a)
{
    int b;
    switch (a)
    {
    case 1: b = 30;
    case 2: b = 20;
    case 3: b = 16;
    default: b = 0;
    }
    return b;
}

int main()
{
    printf("%d", func(1));

}