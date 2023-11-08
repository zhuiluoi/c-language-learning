#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main1()
{
    int i = 1;
    int ret = (++i) + (++i) + (++i);
    printf("ret = %d\n", ret);
    return 0;
}

int main2()
{
    int a = 0;
    int* b = &a;
    printf("%d", sizeof(a));
    printf("%d", sizeof(b));
    return 0;
}

#include <stdio.h>
int i;
int main3()
{
    i--;
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int result = 0;
    for (int i = 0; i <len ; i++)
    {
        count = 0;
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            result = arr[i];
            break;
        }   
    }
    printf("%d", result);
    return 0;
}