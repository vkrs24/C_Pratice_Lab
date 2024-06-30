//29June2024
//5.Prime Number Program in C
//A prime number is a natural number greater than 1 that is 
//completely divisible only by 1 and itself. 

//For example, 2, 3, 5, 7, 11, etc. are the first few prime numbers.
//Input: Enter the Number: 546
//Output: The number 546 is not a Prime Number

#include<stdio.h>
void prime(int number){
	int flag=1;
	for(int i=2;i<number/2+1;i++){
		if(number%i==0){
			flag=0;
		}
			
	}
	if(flag){
		printf("The number %d is a Prime Number",number);
	}
	else{
		printf("The number %d is not a Prime Number",number);
	}
}

int main(){
	int Num;
	printf("Enter the Number: ");
	scanf("%d",&Num);
	prime(Num);
	return 0;
}