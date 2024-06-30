//30June2024
//13.C Program To Find Simple Interest

//Simple interest is a quick method of calculating the interest charge on 
//a loan. In this article, we will learn to calculate the simple interest in 
//C programming language.

//Simple interest is determined by multiplying the daily interest rate by 
//the principal by the number of days that elapse between payments. 

//Divide the product of these three values to convert the percentage 
//value of the interest rate into decimals.

//Simple Interest Formula

//SimpleInterest=(PxTxR)/100

//Where P is the principal amount, T is the time, and, R is the interest 
//rate.
//Input: Enter the Principal, Time and Intrest_Rate : 3000 7 1
//Output: 210.0
#include<stdio.h>

int main(){
	int principal,time,intrest;
	float simple_intrest;
	printf("Enter the Principal, Time and Intrest_Rate : ");
	scanf("%d%d%d",&principal,&time,&intrest);
	simple_intrest=(principal*time*intrest)/100;
	printf("%2f",simple_intrest);
	return 0;
}