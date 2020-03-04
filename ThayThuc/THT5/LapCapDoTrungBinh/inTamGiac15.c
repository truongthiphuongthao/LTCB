#include<stdio.h>
void inTamGiac(int n){
	int i,j;
	for(i=n;i>=1;i--){
		for(j=;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inTamGiac(n);
}
