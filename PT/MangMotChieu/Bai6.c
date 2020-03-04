#include<stdio.h>
#include<math.h>
// Liet ke so nguyen to
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
// ham kiem tra so nguyen to
int ktSNT(int n){
	int i;
	if(n<2){
		return 0;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) 
		   return 0;
	}
	return 1;
}
// Dem so luong so nguyen to
int demSNT(int a[],int n){
	int i,dem;
	dem=0;
	for(i=0;i<n;i++){
		if(ktSNT(a[i]))
		 ++dem;
	}
	return dem;
}
// Liet ke so nguyen to
void lietKeNT(int a[],int n){
	int i;
	printf("\n");
	for(i=0;i<n;i++){
		if(ktSNT(a[i])){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int a[100],n;
	printf("n=");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nSo luong so nguyen to: %d\n",demSNT(a,n));
	printf("\n Hien thi so nguyen to:");
	lietKeNT(a,n);
}
