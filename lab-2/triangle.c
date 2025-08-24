//Area of a Triangle
//Formula: ½ × (b × h)

#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%f", &base);

    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;
    printf("Area of Triangle = %.2f\n", area);

    return 0;
} 
