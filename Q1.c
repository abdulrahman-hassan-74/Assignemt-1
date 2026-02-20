#include <stdio.h>

int main() {
    int score;
    printf("Enter student score (0-100): ");
    scanf("%d", &score);

    /* Check if the input is within the valid range (0-100) [cite: 131] */
    if (score < 0 || score > 100) {
        printf("Invalid input. Please enter a score between 0 and 100.\n");
    } 
    /* Grade A: 90-100 [cite: 126] */
    else if (score >= 90) {
        printf("Grade A\n");
    } 
    /* Grade B: 80-89 [cite: 127] */
    else if (score >= 80) {
        printf("Grade B\n");
    } 
    /* Grade C: 70-79 [cite: 128] */
    else if (score >= 70) {
        printf("Grade C\n");
    } 
    /* Grade D: 60-69 [cite: 129] */
    else if (score >= 60) {
        printf("Grade D\n");
    } 
    /* Grade F: Below 60 [cite: 130] */
    else {
        printf("Grade F\n");
    }
    
    return 0;
}
