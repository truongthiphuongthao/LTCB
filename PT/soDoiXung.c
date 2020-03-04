#include<stdio.h>
void soDoiXung(int n){
	int digit,tem,reserve=0;
	tem=n;
	while(tem!=0){
		digit=tem%10;
		reserve=reserve*10+digit;
		tem/=10;
	}
	if(reserve==n){
			printf("%d is a palindrome.",n);
	}
	else{
		printf("%d is not a palindrome.",n);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	soDoiXung(n);
}
