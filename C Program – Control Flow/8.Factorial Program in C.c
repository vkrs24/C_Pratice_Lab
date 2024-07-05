//5thJuly2024
//8.Factorial Program in C

//Example, the factorial of 6 is 6 * 5 * 4 * 3 * 2 * 1 which is 720. 

//Input:
//	5

//Output:
//Factorial of 5 is 120

#include<stdio.h>

int factorial(int num){
    if(num<0){
        return -1;
    }
    if(num==0){
        return 1;
    }
	return num*factorial(num-1);
}

int main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	int result=factorial(num);
	printf("Factorial of %d is %d",num,result);
	return 0;
}