//10thJuly2024
//15.C Program to Display Armstrong Number Between Two Intervals

// Output
// All Armstrong number between 1 and 1000 are:
// 1 153 370 371 407 

#include<stdio.h>
#include<math.h>

int main(){
	int cnt=0;
	for(int i=1;i<=500;i++){
	    int num=i;
		while(num>0){
			num/=10;
			cnt++;
		}
		num=i;
		int sum=0,rem;
		while(num>0){
		    rem=num%10;
		    num/=10;
		    sum+=pow(rem,cnt);
		}
		if(sum==i){
			printf("%d",i);
			printf("\n");
		}
		cnt=0;
	}
}