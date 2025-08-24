// Swap two variables using third variable

#include <stdio.h>

int main() {

    int a, b, temp;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
