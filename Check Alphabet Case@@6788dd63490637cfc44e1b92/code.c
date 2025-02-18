#include <stdio.h>
#include <ctype.h>  // Include this header for the isupper() and islower() functions

int main() {
    char ch;
    
    // Input a character
   
    scanf("%c", &ch);
    
    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    
    return 0;
}
