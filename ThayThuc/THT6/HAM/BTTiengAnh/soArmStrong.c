#include<stdio.h>
#include<math.h>
int is_Armstrong(int n){
	int digit,tong=0;
	int number=n;
	while(number!=0){
		digit=number%10;
		tong+=pow(digit,3);
		number=number/10;
	}
	if(tong==n){
		return 1;
	}
	else return 0;
}
int main(){
	printf("%d\n", is_Armstrong(371));
}
