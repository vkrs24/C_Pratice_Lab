//9thJuly2024
//11.Fibonacci Series Program in C

// In mathematical terms, the number at the nth position can be 
//represented by:

// Fn = Fn-1 + Fn-2
// with seed values, F0 = 0 and F1 = 1.

// For example, Fibonacci series upto 10 terms is: 0, 1, 1, 2, 3, 5, 
//	8, 13, 21, 34

// Input
// 9

// Output
// 0 1 1 2 3 5 8 13 21 

#include<stdio.h>

int fibonacci_series(int num){
	int first=0,second=1,result,i;
	while(num>0){
		printf("%d",first);
		result=first+second;
		second=first;
		first=result;
		num--;
	}
	return 0;
}

int main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	fibonacci_series(num);
	return 0;
}