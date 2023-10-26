#include <stdio.h>

int main()
{
    int a[] = {1, 2 ,3, 4};
    int b[] = {5, 6, 7, 8};
    int temp[4] = { 0 };
    for (int i = 0; i < 4; i++)
    {
        temp[i] = a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < 4; i++)
    {
        b[i] = temp[i];
    }
    printf("a = ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("b = ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    

}