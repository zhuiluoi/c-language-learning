#include <stdio.h>

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            if (i == 0 | i == n - 1) {
                for (int j = 0; j < n; j++) {
                    printf("* ");
                }
                printf("\n");
            } else {
                for (int m = 0; m < n; m++) {
                    if (m == 0 | m == n - 1) {
                        printf("* ");
                    } else {
                        printf("  ");
                    }
                }
                printf("\n");

            }

        }

    }

}