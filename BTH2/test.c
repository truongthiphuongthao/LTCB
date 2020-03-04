#include<stdio.h>
int main(){
	int a[100],n,i,j;
	printf("Nhap n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",(i+1));
		scanf("%d",&a[i]);
	}
	for(j=0;j<3;j++){
		for(i=n-1;i>=0;i--){
			printf("%8d",a[i]);
		}
		printf("\n");
	}
	
}
