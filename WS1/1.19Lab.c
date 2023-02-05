/**
 *
 * Author:
 * Jimmy Phan
 * Kimlong Hor(Partner)
 *
 */
#include <stdio.h>

int main(void){
	int userNum;
	int userNum2;

	printf("Please enter an integer:");
	scanf("%d", &userNum);

	printf("\nYou entered: %d\n", userNum);
	printf("%d squared is %d\n", userNum, userNum * userNum);
	printf("And %d cubed is %d!!\n", userNum, userNum * userNum * userNum);

	printf("Enter another integer:");
	scanf("%d", &userNum2);

	printf("\n%d + %d is %d\n", userNum, userNum2, userNum + userNum2);
	printf("%d * %d is %d\n", userNum, userNum2, userNum * userNum2);
	return 0;
}
