//30June2024
//7.ASCII Value of a Character in C
// American Standard Code for Information Interchange (ASCII) is a 
//character encoding standard that assigns a unique numerical value to 
//all characters including special symbols. In C programming, the ASCII value of the character is stored 
//instead of the character itself. 
//Input: Enter the Character: k
//Output: The ASCII value of k is 107

#include<stdio.h>
int main(){
	char character;
	printf("Enter the Character: ");
	scanf("%c",&character);
	printf("The ASCII value of %c is %d",character,character);
	return 0;
}