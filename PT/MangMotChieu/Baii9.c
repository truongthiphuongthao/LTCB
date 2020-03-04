#include<stdio.h>
#define MAX 100
void nhapMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d]:",(i+1));
		scanf("%d",&a[i]);
	}
}
// Them phan tu
void themPhanTu(int a[],int n, int vt, int ptthem){
	int i;
	// Kiem tra mang co the them phan tu nua hay khong
	if(n>=MAX){
		return;
	}
	// Kiem tra vi tri co hop le hay khong
	if(vt<0){
		vt=0;
	}
	else if(vt>n){
		vt=n;
	}
	// Dich chuyen mang truoc khi them
	for(i=n;i>vt;i--){
		a[i]=a[i-1];
	}
	a[vt]=ptthem;
	++n;
}
void xuatMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[MAX],n,vt,ptthem;
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nVi tri can them:");
	scanf("%d",&vt);
	printf("\nGia tri them:");
	scanf("%d",&ptthem);
	themPhanTu(a,n,vt,ptthem);
	printf("\nXuat mang sau khi them:");
	xuatMang(a,n);
	
}
