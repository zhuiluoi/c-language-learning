#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 使用 malloc 分配内存
    int* ptr = (int*)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // 初始化分配的内存
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    // 使用 realloc 重新调整内存大小
    ptr = (int*)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        perror("Memory reallocation failed");
        return 1;
    }

    // 使用 calloc 分配并初始化内存
    int* calloc_ptr = (int*)calloc(5, sizeof(int));
    if (calloc_ptr == NULL) {
        perror("Calloc failed");
        return 1;
    }

    // 释放通过 malloc 和 realloc 分配的内存
    free(ptr);

    // 释放通过 calloc 分配的内存
    free(calloc_ptr);

    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int(*ptr)[5] = (int(*)[5])malloc(3 * sizeof(*ptr));
//    if (ptr == NULL) {
//        perror("Memory allocation failed");
//        return 1;
//    }
//    ptr[1][4] = 3;
//    printf("%d\n", ptr[1][4]);
//
//    free(ptr);
//    return 0;
//}