#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows
    // printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print inverted right-angled triangle
    for (int i = rows; i >= 1; i) {
        for (int j = 1; j <= i; j+--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
