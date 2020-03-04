#include<stdio.h>
long long tinhGiaiThua(long long n){
	int i; 
	long long tich=1;
	for(i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld! = %lld",n,tinhGiaiThua(n));
}
