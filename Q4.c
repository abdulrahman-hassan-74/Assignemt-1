#include <stdio.h>

/* Create structure named Distance with feet and inches [cite: 150] */
struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, total;

    /* Input for two Distance variables [cite: 151] */
    printf("Enter 1st distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);
    printf("Enter 2nd distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);

    /* Add the two distances together [cite: 151] */
    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    /* Conversion logic: If inches exceed 12, convert to feet [cite: 152] */
    if (total.inches >= 12.0) {
        /* Add whole feet from inches to the total feet */
        total.feet += (int)(total.inches / 12);
        /* Keep only the remaining inches */
        total.inches = (float)((int)total.inches % 12) + (total.inches - (int)total.inches); 
    }

    /* Display total distance [cite: 151] */
    printf("Total distance: %d feet, %.1f inches\n", total.feet, total.inches);
    
    return 0;
}
