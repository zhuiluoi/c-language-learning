#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    double ave = 0.0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    ave = sum / 10.0;
    printf("%lf", ave);
    return 0;
}