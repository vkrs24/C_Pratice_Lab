//30June2024
//15.C program to demonstrate the area and perimeter of rectangle

//Input:
//Enter the length and Breadth: 10 10

//Output:
//Area of rectangle is : 100
//Perimeter of rectangle is : 40

#include <stdio.h>

int main()
{

	int l,b;
	printf("Enter the length and Breadth: ");
	scanf("%d%d",&l,&b);
	printf("Area of rectangle is : %d", l * b);
	printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
	return 0;
}
