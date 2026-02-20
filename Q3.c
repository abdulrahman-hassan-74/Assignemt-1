#include <stdio.h>

int main() {
    /* Declare an array of 5 characters [cite: 147] */
    char arr[5];
    
    printf("Enter 5 characters: ");
    /* Loop to take 5 characters as input [cite: 148] */
    for(int i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
    }

    printf("Reversed array: ");
    /* Loop to print the array in reverse order [cite: 148] */
    /* Start from index 4 and move down to 0 */
    for(int i = 4; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    
    return 0;
}
