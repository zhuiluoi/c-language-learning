/* #include <stdio.h>
#include <stddef.h>


struct Student
{
    char name[30];
    int age;
    double high;
};

#define OFFSETOF(type, member) (size_t)&((type*)0)->member

int main()
{
    printf("%zd\n", OFFSETOF(struct Student, high));
    printf("%zd\n", offsetof(struct Student, high));
    return 0;
} */

/* #include <stdio.h>
#define SWAP_ODD_EVEN_BITS(x) (((x & 0xAAAAAAAAAAAAAAAA) >> 1) | ((x & 0x5555555555555555) << 1))

int main()
{
    printf("%d\n", SWAP_ODD_EVEN_BITS(100));
    //1. 提取偶数位
    //0xAAAAAAAAAAAAAAAA -> 1010 1010 1010 1010 1010 1010 1010 1010
    //2. 提取出所有偶数位
    //100 = 0110 0100 & 
    //      1010 1010 = 0010 0000
    //3. 右移一位（变为奇数位）
    //0001 0000
    //4. 提取奇数位
    //0x5555555555555555 -> 0101 0101 0101 0101 0101 0101 0101 0101
    //5. 提取出所有奇数位
    //100 = 0110 0100 & 
    //      0101 0101 = 0100 0100
    //6. 左移一位（变为偶数位）
    //1000 1000
    //7. 使用按位或操作（|）将上述两步的结果合并起来，就得到了所有奇数位和偶数位交换后的结果
    //0001 0000 |
    //1000 1000 = 1001 1000 = 152
    return 0;
} */

/* #include <stdio.h>
#define N 4

#define Y(n) ((N+2)*n)


int main()
{
    int z = 2 * (N + Y(5+1));
    //2 * (4 + (6) * 5 + 1)
    //70
    printf("%d\n", z);
    return 0;
}
 */
#include <stdio.h>
#define A 2+2
#define B 3+3
#define C A*B
int main()
{
	printf("%d\n", C);
    // 2+2 * 3+3
    // 2+6+3
    // 11
    return 0;
}