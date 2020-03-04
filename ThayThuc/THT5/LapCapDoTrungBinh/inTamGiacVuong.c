#include<stdio.h>
void inTamGiacVuong(int n){
	int i,j;
	for(i=n;i>=1;--i){
		for(j=1;j<=n-i;j++)
		    printf(" ");
		for(j=1;j<=i;j++){
			printf("*");
		}
	printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inTamGiacVuong(n);
}
