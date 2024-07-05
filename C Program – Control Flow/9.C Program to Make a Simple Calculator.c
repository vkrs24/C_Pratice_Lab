//5thJuly2024
//9.C Program to Make a Simple Calculator

//Input:
// Enter an operator (+, -, *, /), if want to exit press x: +
// Enter two first and second operand: 7 8

// Output:
// 7.0 + 8.0 = 15.0

//Input:
// Enter an operator (+, -, *, /), if want to exit press x: -
// Enter two first and second operand: 8 9

// Output:
// 8.0 - 9.0 = -1.0

//Input:
// Enter an operator (+, -, *, /), if want to exit press x: *
// Enter two first and second operand: 8 7

// Output:
// 8.0 * 7.0 = 56.0

//Input:
// Enter an operator (+, -, *, /), if want to exit press x: /
// Enter two first and second operand: 8 3

// Output:
// 8.0 / 3.0 = 2.7

//Input:
// Enter an operator (+, -, *, /), if want to exit press x: x

#include<stdio.h>
#include<stdlib.h>

int main(){
	char operator;
	int num1,num2;
	while(1){
		printf("Enter the operator (+,-,*,/) \n or \nPress \"x\" for Exit\n");
		scanf("%c",&operator);
		if(operator=='x'){
			exit(0);
		}
		else{
		    printf("\n");
			printf("Enter the Number1 and Number2 Values: ");
			scanf("%d%d",&num1,&num2);
			switch(operator){
				case '+':{
					printf("The Sum of %d + %d = %d",num1,num2,num1+num2);
					printf("\n");
					break;
				}
				case '-':{
					printf("The Product of %d - %d = %d",num1,num2,num1-num2);
					printf("\n");
					break;
				}
				case '*':{
					printf("The Multiple of %d * %d = %d",num1,num2,num1*num2);
					printf("\n");
					break;
				}
				case '/':{
					printf("The Division of %d / %d = %d",num1,num2,num1/num2);
					printf("\n");
					break;
				}
				default:{
					printf("Something went wrong");
				}
			}
			scanf("%c",&operator);
			printf("\n");
		}
	}
}