#include <stdio.h>

int main() {
    int num;
    
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    

    if (num % 5 == 0 && num % 11 == 0) {
        printf("The number is divisible by both 5 and 11.\n");
    } else {
        printf("The number is NOT divisible by both 5 and 11.\n");
    }
    
    return 0;
}