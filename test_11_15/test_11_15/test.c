#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
int main1()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";
    char* str4 = "hello bit.";
    if (str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_rotate_string(char* s1, char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char* temp = (char*)malloc(len1 * 2 + 1);
    strcpy(temp, s1);
    strcat(temp, s1);

    char* res = strstr(temp, s2);

    return res != NULL;
}

int main2()
{
    char s1[] = "AABCD";
    char s2[] = "BCDAA";
    char s3[] = "abcd";
    char s4[] = "ACBD";
    printf("%d\n", is_rotate_string(s1, s2));
    printf("%d\n", is_rotate_string(s3, s4));
    return 0;
}



#include <stdio.h>

int main3()
{
    int row_sz = 4;
    int col_sz = 4;
    int row = 0;
    int col = col_sz - 1;

    int arr[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    int num = 8;
    int flag = 0;
    while (row < row_sz && col >= 0) {

        if (arr[row][col] == num) {
            printf("found\n");
            flag = 1;
            break;
        }
        else if (arr[row][col] > num) {
            col--;
        }
        else {
            row++;
        }
    }
    if (flag == 0)
    {
        printf("no find\n");
    }
    return 0;
}
#include <stdio.h>

int main4()
{
    char suspect[] = "ABCD";
    for (int i = 0; i < 4; i++)
    {
        int lie = 0;
        char killer = suspect[i];
        if (killer == 'A')
        {
            lie++;
        }
        if (killer != 'C')
        {
            lie++;
        }
        if (killer != 'D')
        {
            lie++;
        }
        if (killer == 'D')
        {
            lie++;
        }

        if (lie == 1)
        {
            printf("killer is %c", suspect[i]);
            break;
        }
    }
    
    return 0;
}


#include <stdio.h>

int main()
{
    int arr[7][7] = { 0 };

    for (int i = 0; i < 7; i++)
    {
        arr[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}