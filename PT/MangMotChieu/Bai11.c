#include<stdio.h>
#define MAX 100
void nhapMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d]=",i);
		scanf("%d",&a[i]);
	}
}
// Xoa phan tu
void xoaPhanTu(int a[],int *n, int vt){
	int i;
	if(n>=MAX){
		return;
	}
	if(vt<0){
		vt=0;
	}
	else if(vt>=n){
		vt=n-1;
	}
	for(i=vt;i<n-1;i++){
		a[i]=a[i+1];
	}
	--n;
}
void xuatMang(int a[],int *n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[MAX],n,vt;
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("Nhap vi tri muon xoa:");
	scanf("%d",&vt);
	xoaPhanTu(a,&n,vt);
	printf("\n Xuat Mang:\n");
	xuatMang(a,&n);
}
