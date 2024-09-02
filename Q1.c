#include <stdio.h>

int main() {
    int i, j;
    int start = 41;  

    int rows = 5;

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
    }

    return 0;
}
