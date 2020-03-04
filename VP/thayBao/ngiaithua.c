#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	long long tich=1;
	for(i=1;i<=n;i++){
		tich*=i;
	}
	printf("%d! = %lld",n,tich);
}
