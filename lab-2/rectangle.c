//Area of a Rectangle
//Formula: l * w       //  l= langth 


#include <stdio.h>

int main() {
    float length, breadth, area;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("Area of Rectangle = %.2f\n", area);

    return 0;
}
