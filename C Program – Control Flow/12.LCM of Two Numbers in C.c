//9thJuly2024
//12.LCM of Two Numbers in C

// Find the maximum of the two numbers and store them in a variable max.
// Run a loop and check if max is divisible by both numbers.
// if (max % x == 0 && max % y == 0)
// If the condition is true, it means that max is the LCM of the two numbers.
// If the condition is false, increment max by 1 and continue the loop to check the next number.

// Input
// 15 25

// Output
// The LCM of 15 and 25 is 75.

#include<stdio.h>

int lcm(int x, int y){
	int max,lcm,loop=1;
	if(x>y){
			max=x;
		}
		else{
			max=y;
		}
	while(loop!=0){
		if (max % x == 0 && max % y == 0){
			lcm=max;
			loop=0;
		}
		else{
			max++;
		}
	}
	printf("The LCM of %d and %d is %d",x,y,lcm);
	return 0;
}

int main(){
	int x,y;
	printf("Enter x and y values: ");
	scanf("%d%d",&x,&y);
	lcm(x,y);
	return 0;
}