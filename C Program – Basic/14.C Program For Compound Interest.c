//30June2024
//14.C Program For Compound Interest

//Compound Interest formula:

//Formula to calculate compound interest annually is given by: 
//Amount= P(1 + R/100)t

//Compound Interest = Amount – P
//Where, 
//P is principal amount 
//R is the rate and 
//T is the time span

//Input: Principal (amount):1200
//                   		Time: 2
//                   		Rate: 5.4
//Output: Compound Interest = 133.099243

#include <stdio.h>
#include <math.h>

int main() {
    long double principal, time, interest, amount;
    long double compound_interest;

    printf("Enter the Principal, Time and Interest Rate: ");
    
    scanf("%Lf %Lf %Lf", &principal, &time, &interest);

    amount = principal * pow((1 + interest / 100), time);

    compound_interest = amount - principal;

    printf("Compound Interest = %.2Lf\n", compound_interest);

    return 0;
}
