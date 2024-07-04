//4thJuly2024
//2.C Program – Even or Odd Number

//Use Modulus Operator ( % ) to check if the remainder obtained after 
//dividing the given number N by 2 is 0 or 1.

//If the remainder is 0, print “Even”
//If the remainder is 1, print “Odd”.

#include<stdio.h>

int odd_or_even(int num){
	if(num%2==0){
		printf("%d is Even",num);
	}
	else{
		printf("%d is Odd",num);
	}
	return 0;
}

int main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	odd_or_even(num);
	return 0;
}