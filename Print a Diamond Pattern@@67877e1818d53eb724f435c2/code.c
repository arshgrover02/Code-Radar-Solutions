#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for the top half of the diamond (half the total height)
   
    scanf("%d", &rows);

    // Print the top half of the diamond (pyramid part)
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond (inverted pyramid part)
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
