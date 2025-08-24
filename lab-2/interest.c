// Simple interest Program 
//  Formula: (p × r × n) / 100

#include <stdio.h>

int main(){

    float p, r, n, si;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in months): ");
    scanf("%f", &n);

    si = (p * r * n) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}

