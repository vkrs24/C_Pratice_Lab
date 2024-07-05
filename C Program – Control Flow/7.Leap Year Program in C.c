//5thJuly2024
//7.Leap Year Program in C

//A leap year occurs once every four years and to check whether a year 
//is a leap year, the following conditions should be satisfied:

//It is a multiple of 4 but not of 100, or
//It is a multiple of 400.

#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    long int year;
    printf("Enter the Year: ");
    scanf("%ld", &year);
    if(leap_year(year)){
        printf("%ld is a leap year.\n", year);
    } else {
        printf("%ld is not a leap year.\n", year);
    }
    return 0;
}
