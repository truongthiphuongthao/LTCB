#include<stdio.h>
void in(int n){
	int number;
	while(n!=0){
		number=n%10;
		printf("%d",number);
		n=n/10;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	in(n);
}
