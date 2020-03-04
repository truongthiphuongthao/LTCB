#include<stdio.h>
// Tim so lon thu hai trong mang
void nhapMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d]:",(i+1));
		scanf("%d",&a[i]);
	}
}
// Sx tang dan
void SXTangDan(int a[],int n){
	int i,j,tam;
	for(i=0;i<n;i++){
		for(j=i+1;j<n-1;j++){
			if(a[i]>a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
// Tim phan tu lon thu hai trong mang
int soLonThuHai(int a[],int n){
	SXTangDan(a,n);
	return a[1];
}
int main(){
	int n,a[100];
	printf("Nhap so luong phan tu:");
	scanf("%d",&n);
	nhapMang(a,n);
	printf("\nPhan tu lon thu hai trong mang:\n");
	printf("%d",soLonThuHai(a,n));
}
