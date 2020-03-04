#include<stdio.h>
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
int min(int a[],int n){
	int i;
	int min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min)
		 min=a[i];
	}
	return min;
}
int max(int a[],int n){
	int i;
	int max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
		  max=a[i];
	}
	return max;
}

int main(){
	int a[100],n;
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nGia tri Min:%d",min(a,n));
	printf("\nGia tri Max:%d",max(a,n));
}
