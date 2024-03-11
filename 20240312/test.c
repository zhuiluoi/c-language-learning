#include <stdio.h>

void changePointer(int *ptr) {
    int newVal = 100;
    ptr = &newVal; // 修改形参指针的指向为 newVal 的地址
}

void changeValue(int *ptr) {
    *ptr = 200; // 修改形参指针所指向的地址中的内容
}

int main() {
    int val = 10;
    int *ptr = &val;

    printf("Original value: %d\n", *ptr);

    changePointer(ptr); // 通过指针传递地址
    printf("Value after changePointer: %d\n", *ptr); // 不会改变

    changeValue(ptr); // 通过指针传递地址
    printf("Value after changeValue: %d\n", *ptr); // 会改变

    return 0;
}
