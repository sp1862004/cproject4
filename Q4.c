#include <stdio.h>

int main() {
    int i, j;
    int cols;

    // Number of rows
    int rows = 5;

    for (i = 0; i < rows; i++) {
        cols = rows - i;  // Number of columns in each row

        for (j = 0; j < cols; j++) {
            // Print alternating 1 and 0
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    return 0;
}
