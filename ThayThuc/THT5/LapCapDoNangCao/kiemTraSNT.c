#include<stdio.h>
#include<math.h>
int ktSNT(long long n){
	int i;
	if(n<2){
		return 0;
	}
	else {
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(ktSNT(n)){
		printf("%lld is a prime number.",n);}
	else printf("%lld is not a prime number.",n);
}
