//30June2024
//8.C Program to Swap two Numbers
//Swapping two numbers means exchanging their values. In this article, 
//we will learn how to swap two numbers in the C programming language.
//Input: 
//	Enter Value of x :10
//	Enter Value of y :20
//Output: After Swapping: x = 20, y = 10

#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the X value: ");
	scanf("%d",&x);
	printf("Enter the Y value: ");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After Swapping: x = %d, y = %d",x,y);
	return 0;
}