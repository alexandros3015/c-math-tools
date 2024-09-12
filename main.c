#include <stdio.h>

int main() {
    double x_1, y_1, y_2, x_2 = 0;

    printf("y_2: ");
    scanf("%lf", &y_2);

    printf("y_1: ");
    scanf("%lf", &y_1);
    
    printf("\nx_2: ");
    scanf("%lf", &x_2);

    printf("x_1: \n");
    scanf("%lf", &x_1);

    double top, bottom = 0;
    
    top = y_2-y_1;
    printf("Top of the fraction: %lf\n", top);
    
    bottom = x_2-x_1;
    printf("Bottom of the fraction: %lf\n", bottom);

    printf("Answer: %lf / %lf\n", top, bottom);
    
    double total = top/bottom;
    double yintercept = y_1 - (x_1 * total);
    
    printf("Possible simplified fraction: %lf", total);
    printf("\nThe y-intercept is %lf", yintercept);
}