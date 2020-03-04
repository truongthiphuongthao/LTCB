#include<stdio.h>
void hienThiSNT(int n){
	int i=2;
	while(n!=1){
		if(n%i==0){
			printf("%d ",i);
			n=n/i;
		}
		else{
			i++;
		}
		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	hienThiSNT(n);
	
}
