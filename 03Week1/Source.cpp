#include <stdio.h>

int main() {
    double h, b;
    printf("Input Height:");
    scanf("%lf", &h);
    printf("Input Base lenght:");
    scanf("%lf", &b);
    printf("Area of triangle is %.2lf", 0.5 * h * b);
}