#include<stdio.h>
void inTamGiac(int n){
	int i,j,k=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",k++);
		}
			printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inTamGiac(n);
}
