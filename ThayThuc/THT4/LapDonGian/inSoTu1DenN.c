#include<stdio.h>
void inSo(int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d",i);
		if(i<n){
			printf(", ");
		}
		if(i==n){
			printf("$");
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inSo(n);
}
