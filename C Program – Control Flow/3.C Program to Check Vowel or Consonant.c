//4thJuly2024
//3.C Program to Check Vowel or Consonant

//In English, there are 5 vowel letters and 21 consonant letters. 
//In lowercase alphabets, ‘a’, ‘e’, ‘i’, ‘o’, and ‘u’ are vowels and all 
//other characters (‘b’, ‘c’, ‘d, ‘f’….) are consonants. Similarly in 
//uppercase alphabets, ‘A’, ‘E’, ‘I’, ‘O’, and ‘U’ are vowels, and the rest 
//of the characters are consonants.


#include<stdio.h>

void vowels_or_Consonant(char character){
	if(character=='a'||character=='A'||character=='e'||character=='E'||character=='i'||character=='I'||character=='o'||character=='O'||character=='u'||character=='U'){
		printf("%c is vowels",character);
	}
	else{
		printf("%c is Consonant",character);
	}
}

void main(){
	char character;
	printf("Enter the Character: ");
	scanf("%c",&character);
	vowels_or_Consonant(character);
}