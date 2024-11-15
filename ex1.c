/******************
Name: Jonathan Djerassi    
ID: 303013098
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

	// What bit
	printf("What bit:\n");
	/*Scan two integers (representing number and a position)
	Print the bit in this position. */

	int userNum, userBitPosition, numInPosition, result;
	int index = 1;
	printf("Please enter a number:\n");
	scanf("%d", &userNum);


	printf("Please enter a position:\n");
	scanf("%d", &userBitPosition);

	result = (userNum >> userBitPosition) & 1;

	//index = index << userBitPosition;
	//result = userNum & index;

	printf("The bit in position %d of number %d is %d\n", userBitPosition, userNum, result);


	// Set bit
	/*Scan two integers (representing number and a position)
	Make sure the bit in this position is "on" (equal to 1)
	Print the output
	Now make sure it's "off" (equal to 0)
	Print the output */
	printf("\nSet bit:\n");
	printf("Please enter a number:\n");
	scanf("%d", &userNum);
	printf("Please enter a position:\n");
	scanf("%d", &userBitPosition);

	int indexOfNum = 1;
	int resultOn, resultOff;

	indexOfNum = 1 << userBitPosition;

	resultOn = userNum | indexOfNum;
	resultOff = resultOn ^ indexOfNum;

	//int setBitInPositionOn = userNum | (1 << userBitPosition);
	//int setBitInPositionOff = userNum & ~(1 << userBitPosition);

	printf("Number with bit %d set to 1: %d\n", userBitPosition, resultOn);
	printf("Number with bit %d set to 0: %d\n", userBitPosition, resultOff);


	// Toggle bit
	/*Scan two integers (representing number and a position)
	Toggle the bit in this position
	Print the new number */
	printf("\nToggle bit:\n");
	printf("Please enter a number:\n");
	scanf("%d", &userNum);
	printf("Please enter a position:\n");
	scanf("%d", &userBitPosition);

	userNum = userNum ^ (1 << userBitPosition);
	printf("Number with bit %d toggled: %d\n", userBitPosition, userNum);

	// Even - Odd
	printf("\nEven - Odd:\n");
	int userNumNew;
	printf("Please enter a number:\n");
	scanf("%d", &userNumNew);

	printf("%d\n", (userNumNew & 1));
	/* Scan an integer
	If the number is even - print 1, else - print 0. */

	// 3, 5, 7, 11
	printf("\n3, 5, 7, 11:\n");
	/* Scan two integers in octal base
	sum them up and print the result in hexadecimal base
	Print only 4 bits, in positions: 3,5,7,11 in the result. */
	int userNumOct1, userNumOct2, sumInHexa, sumOfBits;
	printf("Please enter the first number (octal):");
	scanf(" %o", &userNumOct1);
	printf("Please enter the second number (octal):");
	scanf(" %o", &userNumOct2);

	sumInHexa = userNumOct1 + userNumOct2;
	printf("The sum in hexadecimal: %X\n", sumInHexa);
	
	int bitPoseThree = (sumInHexa >> 3) & 1;
	int bitPoseFive = (sumInHexa >> 5) & 1;
	int bitPoseSeven = (sumInHexa >> 7) & 1;
	int bitPoseEleven = (sumInHexa >> 11) & 1;

	printf("The 3,5,7,11 bits are: %d%d%d%d\n", bitPoseThree, bitPoseFive, bitPoseSeven, bitPoseEleven);
	

	printf("Bye!\n");

	return 0;
}
