//30June2024
//12.C Program to Print Prime Numbers From 1 to N

//Prime numbers are positive integers greater than 1 that have no divisors 
//other than 1 and themselves. In this article, we will learn to generate 
//and display all prime numbers from 1 to N in C programming language.

//Input: Enter the Number: 50
//Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 

#include<stdio.h>
#include<stdbool.h>

int prime(int num){
	int flag=1; 
	if(num<1){
		return false;
	}
	else{
		for(int i=2;i<=num/2;i++){
			if(num%i==0){
				flag=0;
				break;
			}
		}
		if(flag){
			return true;
		}
	}
	return 0;
}

int main(){
	int Number;
	printf("Enter the Number: ");
	scanf("%d",&Number);
	for(int j=2;j<=Number;j++){
		if(prime(j)){
			printf("%d ",j);
		}
	}
	return 0;
}