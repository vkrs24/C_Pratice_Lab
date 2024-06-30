//30June2024
//9.C Program To Convert Fahrenheit To Celsius
//write a C Program to convert temperature from Fahrenheit to Celsius by 
//applying the conversion formula to calculate the equivalent temperature in 
//Celsius. For example, 82° in Fahrenheit is equal to 27.7° in Celcius.

//Formula to Convert Fahrenheit to Celsius
//T(°C) = (T(°F) - 32) × 5/9 
//where,

//T(°C): Temperature in Celsius.
//T(°F): Temperature in Farenheit.

//Input: Enter the Temperature in Degree Fahrenheit : 40 
//Output: Temperature in Degree Celsius : 4.44

#include<stdio.h>

void fahrenheit_to_celsius(int fahrenheit){
	float celsius=(fahrenheit-32.0)*(5.0/9.0);
	printf("Temperature in Degree Celsius : %.2f",celsius);
}

int main(){
	int fah;
	printf("Enter the Temperature in Degree Fahrenheit : ");
	scanf("%d",&fah);
	fahrenheit_to_celsius(fah);
}