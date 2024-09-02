#include <stdio.h>

int main() {
    int i, j;
    int start;

    // Number of rows
    int rows = 5;

    for (i = 0; i < rows; i++) {
        // Set the starting number for each row
        start = rows - i;

        for (j = 0; j <= i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
    }

    return 0;
}
