#include <stdio.h>

int n = 0;
int pinNum[6] = {0};
int pinRe[6] = {0};
int checkNum[6] = {0};

int main(){

    while (n != 4){

        printf("Welcome to your PIN program! Choose from the options below.\n");
        printf(" 1 for entering a PIN twice\n");
        printf(" 2 for checking if PINs are equal\n");
        printf(" 3 for checking if PIN violates rule\n");
        printf(" 4 for exiting the program\n");

        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("\nPlease Enter your PIN number separated by spaces. Do NOT use the number 0 to begin your PIN number!\n");
                scanf("%d%d%d%d%d%d", &pinNum[0], &pinNum[1], &pinNum[2], &pinNum[3], &pinNum[4], &pinNum[5]);
                printf("\nPlease Re-enter PIN number separated by spaces to verify it is the same number.\n");
                scanf("%d%d%d%d%d%d", &pinRe[0], &pinRe[1], &pinRe[2], &pinRe[3], &pinRe[4], &pinRe[5]);
                break;

            case 2:
                printf("\nPlease Re-enter PIN number separated by spaces to verify the numbers are equal.\n");
                scanf("%d%d%d%d%d%d", &checkNum[0], &checkNum[1], &checkNum[2], &checkNum[3], &checkNum[4], &checkNum[5]);

                    if (pinNum != checkNum){
                        printf("\nPIN numbers did NOT match\n");}

                    else printf("\nPIN numbers are a match.\n");\
                break;

            case 3:

                if (pinNum[0] == 0){
                    printf("\nYour PIN number violates the rule!\n");
                    }

                    else printf("\nYour PIN number is valid.\n");


                break;

            case 4:
                printf("\nYou are now exiting the PIN program\n");

                break;

            default:
                printf("\nPlease enter options 1 through 4 only! \n");
                break;

        }
        continue;
        return 0;
    }
    }
