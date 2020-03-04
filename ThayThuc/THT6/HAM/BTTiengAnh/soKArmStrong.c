#include<stdio.h>
#include<math.h>
int is_Armstrong(int n){
	int digit,tong=0;
	int number=n, bigNumber=n ;
	int i=0;
	while(number!=0){
		number=number/10;
		i++;
	}
	while(bigNumber!=0){
		digit=bigNumber%10;
		tong+=pow(digit,i);
		bigNumber=bigNumber/10;
	}
	if(tong==n){
		return 1;
	}
	else return 0;
}
int main(){
	printf("%d\n", is_Armstrong(153));
}
