//Fint the area of circle
//Formula: π × r² 

#include <stdio.h>
// #include <math.h> // For M_PI (value of π)

// #define PI 3.14  

int main() {
    float radius, area, PI=3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;  

    printf("Area of Circle = %.2f\n", area);

    return 0;
}

