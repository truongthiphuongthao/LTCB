#include<stdio.h>
long long Factorial2 (int n){
	int i;
	long long tich=1;
	if(n%2==0){
		for(i=1;i<=n;i++){
			if(i%2==0){
				tich*=i;
			}
		}
	}
	else{
		for(i=1;i<=n;i++){
			if(i%2!=0){
				tich*=i;
			}
		}
	}
	return tich;
}
int main(){
	int i;
	for(i=1;i<=25;i++)
	    printf("%lld\n",Factorial2(i));
}
