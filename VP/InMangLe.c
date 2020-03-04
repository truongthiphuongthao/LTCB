#include<stdio.h>
int tongChan(int a[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			sum+=a[i];
		}
	}
	return sum;
}
int main(){
	int a[100],n;
	printf("Nhap n:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("Phan tu thu %d:",(i+1));
		scanf("%d",&a[i]);
	}
	
	printf("%d",tongChan(a,n));
}
