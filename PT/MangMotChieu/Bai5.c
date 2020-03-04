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
void inViTri(int a[],int n, int k){
	int i;
	for(i=0;i<n;i++){
      if(a[i]==k)
      	printf("%d ",i);
      else printf("_ ");
      }
}
int main(){
	int n,a[100],k;
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("Nhap gia tri k:");
	scanf("%d",&k);
	printf("\n");
	inViTri(a,n,k);
}
