// find the cube of a given number using UDF.

#include <stdio.h>

// Function to calculate cube

int cube(int n) {
    return n * n * n;
}

int main() {
    int num, result;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    result = cube(num);
    printf("Cube is: %d\n", result);

    return 0;
}
