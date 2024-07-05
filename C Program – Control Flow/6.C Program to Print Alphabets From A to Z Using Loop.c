//5thJuly2024
//6.C Program to Print Alphabets From A to Z Using Loop

//Our task is to print the alphabets from A to Z using loops. 
//There are various methods to print alphabets from (A to Z) or (a to z).

//Using ASCII values
//Using character variables.

//Output: 

//Alphabets from (A-Z) are:
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
//Alphabets from (a-z) are:
//a b c d e f g h i j k l m n o p q r s t u v w x y z 

#include<stdio.h>

void small_alphabets(){
	for(char i='a';i<='z';i++){
		printf("%c ",i);
	}
	printf("\n");
}

void capital_alphabets(){
	for(char i='A';i<='Z';i++){
		printf("%c ",i);
	}
}

void main(){
	small_alphabets();
	capital_alphabets();
}