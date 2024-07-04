//4thJuly2024
//4.C program to Find the Largest Number Among Three Numbers

//Check if A is greater than or equal to both B and C, A is the largest number.
//Check if B is greater than or equal to both A and C, B is the largest number.
//Check if C is greater than or equal to both A and B, C is the largest number.

//Input:
//Enter the numbers A, B and C: 2 3 4

//Output:
//4 is the largest number

#include<stdio.h>

int Among_Three_Numbers(int a, int b, int c ){
	if(a>b && a>c){
		printf("%d is Largest Number",a);
	}
	else if(b>a && b>c){
		printf("%d is Largest Number",b);
	}
	else{
		printf("%d is Largest Number",c);
	}
}

int main(){
	int A, B, C;
	printf("Enter the A, B and C Numbers: ");
	scanf("%d%d%d",&A,&B,&C);
	Among_Three_Numbers(A,B,C);
}