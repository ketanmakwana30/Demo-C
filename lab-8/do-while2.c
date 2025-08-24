// Print even numbers from 1 to N using a do-while loop.

#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter any number: ");
    scanf("%d\n", &n);

    do {
        printf("%d ", i);
        i += 2;
    } while (i <= n);
    return 0;
}
