//5thJuly2024
//10.C Program to Generate Multiplication Table

// Input: 

// num = 5 
// range = 10
// Output:

// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50

#include<stdio.h>
 
int main(){
	int num,range;
	printf("Enter the Multiplication Table Number and Range: ");
	scanf("%d%d",&num,&range);
	for(int i=1;i<=range;i++){
		printf("%d x %d = %d\n",num,i,num*i);
	}
	return 0;
	
}