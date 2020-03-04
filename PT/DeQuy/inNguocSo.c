#include<stdio.h>
void inNguoc(int n){
	if(n==0) return;
	printf("%d",n%10);
		inNguoc(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	inNguoc(n);
}
