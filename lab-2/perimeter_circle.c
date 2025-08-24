//Perimeter of Circle
//Formula: 2 × π × r

#include <stdio.h>

#define PI 3.14

int main() {
    float r, perimeter;

    printf("Enter radius: ");
    scanf("%f", &r);

    perimeter = 2 * PI * r;

    printf("Perimeter of Circle = %.2f\n", perimeter);
    
    return 0;
}
