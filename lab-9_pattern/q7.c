// Right Half Pyramid with Alphabets.

// A
// B A
// C B A
// D C B A
// E D C B A

#include<stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = i; j >= 1; j--) {
            printf("%c ", 64 + j); // 65 = 'A'
        }
        printf("\n");
    }
    return 0;
}
