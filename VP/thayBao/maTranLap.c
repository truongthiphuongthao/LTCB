#include<stdio.h>
int main(){
	// m=2 n=3
	int m,n,i;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m*n;i++){
		printf("%d ",i);
		if(i%n==0){
			printf("\n");
		}
	}
}
