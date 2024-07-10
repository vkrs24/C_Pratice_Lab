//9thJuly2024
//13.C Program to Check Armstrong Number

// Input: 153

// Output: Yes

// Explanation :

// 153 is an Armstrong number of 3 digits, since the sum of cubes of each digit is equal to the number itself. As shown below: 

// 1*1*1 + 5*5*5 + 3*3*3 = 153

// Input: 120

// Output: No

// Explanation :

// 120 is not a Armstrong number of 3 digits, the sum of cubes of each digit is equal to 9 but number is 120.

// 1*1*1 + 2*2*2 + 0*0*0 = 9

#include<stdio.h>
#include<math.h>

int digit_find(int num){
    int quo,digit=0;
	while(num>0){
		quo=num/10;
		num=quo;
		digit++;
	}
	return digit;
}


int Check_Armstrong_Number(int num,int digits){
	int rem,quo,sum=0,result;
	result=num;
	while(num>0){
		quo=num/10;
		rem=num%10;
		num=quo;
		sum+=pow(rem,digits);
	}
	if(sum==result){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

int main(){
	long int num;
	int digits;
	printf("Enter the Number: ");
	scanf("%Ld",&num);
	digits=digit_find(num);
	Check_Armstrong_Number(num,digits);
	return 0;
}