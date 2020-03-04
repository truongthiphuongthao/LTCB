#include<stdio.h>
void nhapMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d]:",(i+1));
		scanf("%d",&a[i]);
	}
}
// 7 5
void sxTangDan(int a[],int n){
	int i,j,tam;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			  tam=a[i];
			  a[i]=a[j];
			  a[j]=tam;
			}	   
		}
	}
} 
void sxGiamDan(int a[], int n){
	int i,j,tam;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void xuatMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n,a[100];
	printf("Nhap so luong phan tu:");
	scanf("%d",&n);
	nhapMang(a,n);
	sxTangDan(a,n);
	printf("\n Sap xep tang dan:\n");
	xuatMang(a,n);
	sxGiamDan(a,n);
	printf("\n Sap xep giam dan:\n");
	xuatMang(a,n);
}
