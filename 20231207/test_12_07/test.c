#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    // ʹ�� malloc �����ڴ�
    int* ptr = (int*)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // ��ʼ��������ڴ�
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    // ʹ�� realloc ���µ����ڴ��С
    ptr = (int*)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        perror("Memory reallocation failed");
        return 1;
    }

    // ʹ�� calloc ���䲢��ʼ���ڴ�
    int* calloc_ptr = (int*)calloc(5, sizeof(int));
    if (calloc_ptr == NULL) {
        perror("Calloc failed");
        return 1;
    }

    // �ͷ�ͨ�� malloc �� realloc ������ڴ�
    free(ptr);

    // �ͷ�ͨ�� calloc ������ڴ�
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