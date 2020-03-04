#include<stdio.h>
int main(){
	int a[100],n,i,sum;
	printf("Nhap n:");
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++){
		printf("Phan tu thu %d:",(i+1));
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i]*(i+1);
	}
	printf("%d",sum);
}
