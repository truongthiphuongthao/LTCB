#include<stdio.h>
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else return gcd(b,a%b);
}
int main(){
	int a, b;
	scanf("%d %d",&a,&b);
	if(gcd(a,b)<0){
		printf("%d",-gcd(a,b));
	}
	else printf("%d",gcd(a,b));

}
