#include <stdio.h>

int main(void) {
    printf("Standard form: Ax + By = C\n");
    printf("Slope-intercept form: y = mx + b\n\n");

    double m, b; // Define slope-intercept form units

    // Get needed values
    printf("Enter a value m:");
    scanf("%lf", &m);
    
    printf("Enter a value b:");
    scanf("%lf", &b);


    printf("%lgx + y = %lg\n", m, -b); // Show standard form
}