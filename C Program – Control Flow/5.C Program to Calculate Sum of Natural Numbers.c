//4thJuly2024
//5.C Program to Calculate Sum of Natural Numbers

//Input: 
//	n = 10

//Output: 
//	55 

//Explanation: The sum of natural numbers up to a 
//given number is 0+1+2+3+4+5+6+7+8+9+10=55

#include<stdio.h>

int sum_of_natural_numbers(int num){
	int sum=0;
	while(num>0){
		sum+=num;
		num--;
	}
	return sum;
}

int main(){
	int number;
	printf("Enter the Number: ");
	scanf("%d",&number);
	printf("The sum of natural numbers up to %d is %d",number,sum_of_natural_numbers(number));
	return 0;
}