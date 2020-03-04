#include<stdio.h>
//Hien thi cac phan tu co gia tri chia het cho 3 hoac cho 5
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
void hienThiPhanTu(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if((a[i]%3==0)||(a[i]%5==0))
		 printf("%d ",a[i]);
	}
}
// Hien thi phan tu nho hon 0
void hienThi(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]<0)
		 printf("%d ",a[i]);
	}
}
int main(){
	int n,a[100],x;
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\n");
	hienThiPhanTu(a,n);
	printf("\n");
	hienThi(a,n);
}
