#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for the triangle
 
    scanf("%d", &rows);

    // Print the numeric right-angled triangle
    for (int i = 1; i <= rows; i++) {
        // Print numbers from 1 to the current row number (i)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
