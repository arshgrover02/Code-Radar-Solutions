#include<stdio.h>


int main() {
    int rows;

    // Input the number of rows for the pyramid
   
    scanf("%d", &rows);

    // Print the pyramid
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j < rows; j++) {
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
