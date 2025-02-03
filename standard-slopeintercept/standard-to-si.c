#include <stdio.h>

int main(void) {
    printf("Standard form: Ax + By = C\n");
    printf("Slope-intercept form: y = mx + b\n\n");

    double a, b, c; // Define standard form units

    // Get needed values
    printf("Enter a value A (x): ");
    scanf("%lf", &a);

    printf("Enter a value B (y): ");
    scanf("%lf", &b);

    printf("Enter value C: ");
    scanf("%lf", &c);

    double m = -a/b; // Calculate slope
    double bi = c/b; // Calculate y-intercept

    printf("y = %lgx + %lg\n", m, bi); // Show slope-intercept form
}