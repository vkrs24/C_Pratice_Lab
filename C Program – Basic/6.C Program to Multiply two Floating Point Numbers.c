//29June2024
//6.C Program to Multiply two Floating Point Numbers
// Floating point numbers are a way to represent real numbers with both 
//whole parts and fractional parts. 
// Input: A = 2.12, B = 3.88
// Output: Product of entered numbers is: 8.226

#include<stdio.h>
float float_multiple(float a,float b){
	float multiple;
	multiple=a*b;
	return multiple;
}

int main(){
	float a, b;
	printf("Enter A and B value : ");
	scanf("%f%f",&a,&b);
	printf("Product of entered numbers is: %f",float_multiple(a,b));
	return 0;
}