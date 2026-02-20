#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    /* Determine if the number is Positive [cite: 134, 135] */
    if (num > 0) {
        /* Check for Even or Odd using the modulo operator [cite: 134, 135] */
        if (num % 2 == 0) {
            printf("Positive and Even\n");
        } else {
            printf("Positive and Odd\n");
        }
    } 
    /* Check if the number is Negative [cite: 137] */
    else if (num < 0) {
        printf("Negative\n");
    } 
    /* If it is not positive or negative, it must be Zero [cite: 138] */
    else {
        printf("Zero\n");
    }
    
    return 0;
}
