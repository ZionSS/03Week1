#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double h, b;
    printf("Input Height:");
    scanf("%lf", &h);
    printf("Input Base lenght:");
    scanf("%lf", &b);
    if(h>0 && b>0){
    printf("Area of triangle is %.2lf", 0.5 * h * b);
    }
     else if(h <= 0 || b  <= 0)
     {
        printf("Error");
     }  
}
