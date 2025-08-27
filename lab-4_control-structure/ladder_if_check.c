
// Check if a number is Negative, Neutral, or Positive (ladder if-else)

#include <stdio.h>

int main() {

    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("This number is Negative\n");
    else if (num == 0)
        printf("This number is Neutral\n");
    else
        printf("This number is Positive\n");

    return 0;

}