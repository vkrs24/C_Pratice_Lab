//4thJuly2024
//1.C program to Check Whether a Number is Positive or Negative or Zero

//Given a number A. The task is to check whether A is positive, 
//negative or zero.

//Examples:

//Input: A = 2
//Output: 2 is positive

//Input: A = -554
//Output: -554 is negative

#include<stdio.h>

int checking(int num){
	if(num>0){
		printf("%d is Positive",num);
	}
	else if(num<0){
		printf("%d is Negative",num);
	}
	else{
		printf("%d is Zero",num);
	}
	return 0;
}

int main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	checking(num);
	return 0;
}