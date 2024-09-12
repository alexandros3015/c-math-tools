#include <stdio.h>

int main() {
    // All values needed
    double x_1, y_1, y_2, x_2 = 0;

    // Get all needed values
    printf("y_2: ");
    scanf("%lf", &y_2);

    printf("y_1: ");
    scanf("%lf", &y_1);
    
    printf("\nx_2: ");
    scanf("%lf", &x_2);

    printf("x_1: ");
    scanf("%lf", &x_1);

    // Get the top of the fraction, the bottom of the fraction, and the total
    double top, bottom = 0;
    
    top = y_2-y_1;
    printf("\nTop of the fraction: %lf\n", top);
    
    bottom = x_2-x_1;
    printf("Bottom of the fraction: %lf\n", bottom);

    printf("Answer: %lf / %lf\n", top, bottom);
    
    double total = top/bottom;
    double yintercept = y_1 - (x_1 * total); // Gets y-intercept
    
    printf("Possible simplified fraction: %lf", total);
    printf("\nThe y-intercept is %lf", yintercept);
    
    return 0;
}