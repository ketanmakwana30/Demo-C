// create a menu-driven program for Telecom call service conversation using nested switch case.

#include <stdio.h>

int main() {

    int mainChoice, subChoice;

    printf("----- Telecom Call Service -----\n");
    printf("1. Prepaid Services\n");
    printf("2. Postpaid Services\n");
    printf("3. Internet Services\n");
    printf("Enter your choice: ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {

        case 1:
            printf("\n--- Prepaid Services ---\n");
            printf("1. Check Balance\n");
            printf("2. Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {

                case 1:
                    printf("Your prepaid balance is ₹150.\n");
                    break;
                case 2:
                    printf("Recharge successful! New balance: ₹500.\n");
                    break;
                default:
                    printf("Invalid prepaid option.\n");
            }
            break;

        case 2:
            printf("\n--- Postpaid Services ---\n");
            printf("1. Check Bill\n");
            printf("2. Pay Bill\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {

                case 1:
                    printf("Your postpaid bill is ₹799 due on 25th Aug.\n");
                    break;
                case 2:
                    printf("Bill payment successful. Thank you!\n");
                    break;
                default:
                    printf("Invalid postpaid option.\n");
            }
            break;

        case 3:
            printf("\n--- Internet Services ---\n");
            printf("1. Check Data Balance\n");
            printf("2. Recharge Data Pack\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {

                case 1:
                    printf("You have 2.5 GB data remaining.\n");
                    break;
                case 2:
                    printf("Data pack activated! You now have 5 GB.\n");
                    break;
                default:
                    printf("Invalid internet option.\n");
            }
            break;

        default:
            printf("Invalid main menu option.\n");
    }

    return 0;
}
