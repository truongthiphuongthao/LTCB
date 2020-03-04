#include<stdio.h>
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int tongBinhPhuongMang(int a[], int n){
	int i, sum=0;
	for(i=0;i<n;i++){
		sum+=a[i]*a[i];
	}
	return sum;
}
int main(){
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	inMang(a,n);
	printf("\n%d",tongBinhPhuongMang(a,n));
}
