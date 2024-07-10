//9thJuly2024
//14.C Program to Print Armstrong Numbers Between 1 to 1000

// Output
// All Armstrong number between 1 and 1000 are:
// 1 2 3 4 5 6 7 8 9 153 370 371 407 

#include<stdio.h>
#include<math.h>

int main(){
	int cnt=0;
	for(int i;i<=1000;i++){
	    int num=i;
		while(num>0){
			num/=10;
			cnt++;
		}
		num=i;
		int sum=pow(num%10,cnt)+pow((num%100-i%10)/10,cnt)+pow((num%1000-i%100)/100,cnt);
		if(sum==i){
			printf("%d",i);
			printf("\n");
		}
		cnt=0;
	}
}