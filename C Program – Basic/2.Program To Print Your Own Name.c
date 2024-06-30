//29June2024
//2.Program To Print Your Own Name
//Input: Enter Your Name: Vasanth
//Output: Your Name is Vasanth

#include<stdio.h>
int main(){
    char name[20];
    printf("Enter Your Name: ");
    scanf("%s",&name);
    printf("Your Name is %s",name);
    return 0;
}