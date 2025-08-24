// Print Fibonacci series up to N numbers using a for loop.

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
