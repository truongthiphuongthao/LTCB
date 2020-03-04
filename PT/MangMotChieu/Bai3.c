#include<stdio.h>
//Bai 3: Cho biet phan tu x xuat hien bao nhieu lan trong mang, voi x do nguoid ung nhap vao
void nhapMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d]:",(i+1));
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
// Dem so lan x xuat hien trong mang
int demX(int a[], int n, int x){
	int i,dem;
	dem=0;
	for(i=0;i<n;i++){
		if(a[i]==x)
		 ++dem;
		 }
	return dem;
}
int main(){
	int n,a[100],x;
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nNhap phan tu can tim kiem:");
	scanf("%d",&x);
	printf("\nSo lan %d xuat hien:%d",x,demX(a,n,x));
}
