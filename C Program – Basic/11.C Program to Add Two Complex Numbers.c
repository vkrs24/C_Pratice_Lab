//30June2024
//11.C Program to Add Two Complex Numbers
//Complex numbers are those numbers that can be expressed in the form of 
//“a+ib” where a and b are the real numbers and i is the imaginary part 
//called “iota” The value of i is √-1. In this article, we are going to add 
//two complex numbers using a C program.

//Example of Add Two Complex Number
//Output:
//A = ( 2 + 3i )
//B = ( 4 + 5i )
//Sum of A and B = ( 6 + 8i )
//Explanation:   

//= ( 2 + 3i ) + ( 4 + 5i )
//= ( 2 + 4 ) + ( 3 + 5 )i 
//= ( 6 + 8i )

#include<stdio.h>

typedef struct complex_number{
	int real;
	int image;
}complex;

complex add(complex x,complex y){
	complex result;
	result.real=x.real+y.real;
	result.image=x.image+y.image;
	return result;
}

int main(){
	complex a,b,sum;
	
	a.real = 2;
    a.image = 3;
 
    b.real = 4;
    b.image = 5;
	
    printf("A = ( %d + %di )",a.real,a.image);
    printf("\n");
    printf("B = ( %d + %di )",b.real,b.image);
    printf("\n");
	sum=add(a,b);
	printf("Sum of A and B = ( %d + %di )",sum.real,sum.image);
	return 0;
}