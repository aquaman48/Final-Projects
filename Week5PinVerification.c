#include <stdio.h>
#include <stdlib.h>

int userResponse = 0;

int main()
{
	int pinA[6] = { 0 };//stores input of pin 1 from user
	int pinB[6] = { 0 };//stores input of pin 2 from user
	int i = 0; //stores to arrays to check for matching. 
	do {
		printf("\n\t-*-*-*-PIN Verification Program-*-*-*-\n");
		printf("\t1\tEnter PIN twice\n");
		printf("\t2\tPINS Match\n");
		printf("\t3\tCheck to see if PIN does not start with a 0\n");
		printf("\t4\tExit\n");

		scanf_s("%d", &userResponse);

		switch (userResponse) {
		case 1:

			printf("\nPlease enter a SIX digit PIN number separated by spaces. Please do not start with 0!\n");

			scanf_s("%d %d %d %d %d %d", &pinA[0], &pinA[1], &pinA[2], &pinA[3], &pinA[4], &pinA[5]);

			printf("\nPlease Re-Enter your SIX digit PIN with spaces: \n");

			scanf_s("%d %d %d %d %d %d", &pinB[0], &pinB[1], &pinB[2], &pinB[3], &pinB[4], &pinB[5]);

			break;

		case 2:		
			pinA[i] = pinA[0],pinA[1], pinA[2], pinA[3], pinA[4], pinA[5];
			pinB[i] = pinB[0], pinB[1], pinB[2], pinB[3], pinB[4], pinB[5];

			if (pinA[i] == pinB[i]) {
				printf("The pins match!");
			}
			else 
				printf("Pins DO NOT MATCH. Select option 1 again.");
			break;

		case 3:
			if (pinA[0] == 0 && pinB[0] == 0) {
				printf("You violated the zero rule! The PIN was not supposed to start with 0. RETRY! \n");
			}
			else
				printf("Congratulations, you did not break the 0 rule.\n");
				break;

		case 4:

			printf("Exiting, Thank you!");

			break;

		default:

			printf("Please enter a valid option displayed in the menu.");


			break;

		}



	} while (userResponse != 4);





		return 0;
}
