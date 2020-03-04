#include<stdio.h>
int gcd(int a, int b){
	int tmp;
	while(b!=0){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
int main(){
	int a, b;
	scanf("%d %d",&a,&b);
	if(gcd(a,b)<0){
		printf("%d",-gcd(a,b));
	}
	else printf("%d",gcd(a,b));
}
