#include<stdio.h>
int tinhTong(int a[], int n){
	int tong=0, i;
	for(i=0;i<n;i++){
		tong+=a[i];
	}
	return tong;
}
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n, a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	printf("%d\n",tinhTong(a,n));
	inMang(a,n);
}
