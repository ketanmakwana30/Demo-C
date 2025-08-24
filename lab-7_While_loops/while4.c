// print odd numbers from N to 1 using a while loop.

// if (n % 2 != 0) condition ensures only odd numbers are printed.

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    while (n >= 1) {
        if (n % 2 != 0) {
            printf("%d\n", n);
        }
        n--;
    }
    return 0;
}
