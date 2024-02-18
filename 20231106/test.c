/*#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a = %d b = %d\n", a, b);
    return 0;
}*/

/*#include <stdio.h>

int NumberOf1(int n ) {
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{
    printf("%d\n", NumberOf1(15));
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int number = 15;
    int even = 0;
    int odd = 1;
    int i = 0;
    for (i = 30; i >= 0; i -= 2) {
        even = (number >> i) & 1;
        printf("%d", even);
        
    }
    printf("\n");
    for (i = 31; i >= 1; i -= 2) {
        odd = (number >> i) & 1;
        printf("%d", odd);
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int count = 0;
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        count = 0;
        for (int i = 0; i < 32; i++)
        {
            if ((a & 1) == (b & 1))
            {
                count++;
            }
            a = a >> 1;
            b = b >> 1;
        }
        printf("%d\n", 32 - count);
    }
    return 0;
}