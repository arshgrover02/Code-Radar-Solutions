#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for the triangle
   
    scanf("%d", &rows);

    // Print the mirrored right-angled triangle
    for (int i = 1; i <= rows; i++) {
        // Print spaces to align the stars on the right
        for (int j = i; j <= rows; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
