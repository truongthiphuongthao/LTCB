#include<stdio.h>
long long tongBinhPhuong(long long n){
	int i;
	long long sum=0;
	for(i=1;i<=n;i++){
		sum+=i*i;
	}
	return sum;
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",tongBinhPhuong(n));
}
