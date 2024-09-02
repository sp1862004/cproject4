#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

       
        for (j = i; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }

       
        for (j = 2 * i - 2; j >= i; j--) {
            printf("%d", j);
        }

        
        printf("\n");
    }

    return 0;

}
