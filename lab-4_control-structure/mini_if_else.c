// Find minimum of two numbers (using if-else)

#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);

    if (num1 < num2)
        printf("The minimum value is: %d\n", num1);
    else
        printf("The minimum value is: %d\n", num2);

    return 0;
}