#include <stdio.h>

int main() {
    char op;
    float n1, n2;

    /* Prompt user for operator and two operands [cite: 141, 142] */
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to catch any newline character
    printf("Enter two operands: ");
    scanf("%f %f", &n1, &n2);

    /* Menu-driven logic using switch statement [cite: 141] */
    switch(op) {
        case '+': 
            printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2); 
            break;
        case '-': 
            printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2); 
            break;
        case '*': 
            printf("%.1f * %.1f = %.1f", n1, n2, n1 * n2); 
            break;
        case '/': 
            /* Handle the case of division by zero [cite: 142] */
            if (n2 != 0) {
                printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
            } else {
                printf("Error! Division by zero.");
            }
            break;
        /* Default case for invalid operators */
        default: 
            printf("Error! Operator is not correct.");
    }
    
    return 0;
}
