#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main1()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}

#include <stdio.h>

int my_atoi(const char* str) {
    int num = 0;
    int sign = 1;

    // �����հ��ַ�
    while (*str == ' ' || *str == '\n' || *str == '\t') {
        str++;
    }

    // ���Ŵ���
    if (*str == '+' || *str == '-') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }

    // ����ת��
    while (*str >= '0' && *str <= '9') {
        int digit = *str - '0';

        num = num * 10 + digit;
        str++;
    }

    return sign * num;
}

int main() {
    char str[] = "  -1234";
    int val = my_atoi(str);
    printf("%d\n", val);
    return 0;
}