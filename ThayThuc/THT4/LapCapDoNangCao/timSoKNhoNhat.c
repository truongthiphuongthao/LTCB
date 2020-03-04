#include<stdio.h>
#include<math.h>
int tinhK(int n){
	int k=0;
	while(pow(2,k)<n){
		k++;
	}
	return k;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tinhK(n));
}
