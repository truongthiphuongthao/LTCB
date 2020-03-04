#include<stdio.h>
//Bai 2: Viet chuong trinh tinh tong cac phan tu co gia tri le trong mang
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
int tinhTongLe(int a[], int n){
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0)
		 sum+=a[i];
		}
	return sum;	
}
int main(){
	int n,a[100];
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nTong le: %d",tinhTongLe(a,n));
}
