//29June2024
//4.C Program to Add Two Integers
//Input: Enter two numbers A and B : 10 20
//Output: Sum of A and B is: 30

#include<stdio.h>
int main(){
	int a,b,sum=0;
	printf("Enter the two Values A and B : ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Sum of A and B is: %d",sum);
	return 0;
}