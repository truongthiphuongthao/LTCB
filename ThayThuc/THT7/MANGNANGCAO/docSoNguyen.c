#include<stdio.h>
void readArray(int a[], int n){
	int i=n-1;
	if(n==0){
		return;
	}
	else{
		scanf("%d",&a[n-i-1]);
		readArray(a+1,n-1);
	}
}
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n, a[100];
	scanf("%d",&n);
	readArray(a,n);
	inMang(a,n);
}
