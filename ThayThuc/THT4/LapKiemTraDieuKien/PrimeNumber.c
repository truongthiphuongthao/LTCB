#include<stdio.h>
#include<math.h>
int checkPrimeNumber(int n){
	int i;
	if(n<2){
		return 0;
	}
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	if(checkPrimeNumber(n)){
		printf("%d is a prime number.",n);
	}
	else printf("%d is not a prime number.",n);
}
