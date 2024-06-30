//30June2024
//10.C Program to Find the Size of int, float, double and char
//Given four types of variables, namely int, char, float and double, 
//the task is to write a program in C to find the size of these 
//four types of variables.

// C program to find the size of int, char,
// float and double data types

#include <stdio.h>

int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;

	// Calculate and Print
	// the size of integer type
	printf("Size of int is: %ld", sizeof(integerType));

	// Calculate and Print
	// the size of charType
	printf("\nSize of char is: %ld", sizeof(charType));

	// Calculate and Print
	// the size of floatType
	printf("\nSize of float is: %ld", sizeof(floatType));

	// Calculate and Print
	// the size of doubleType
	printf("\nSize of double is: %ld", sizeof(doubleType));

	return 0;
}
