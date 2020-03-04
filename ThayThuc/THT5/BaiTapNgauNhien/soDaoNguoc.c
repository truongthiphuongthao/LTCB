#include<stdio.h>
int inSDN(int n){
	int digit, reverse=0;
	while(n!=0){
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	return reverse;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",inSDN(n));
}
