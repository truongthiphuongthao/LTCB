#include<stdio.h>
int sumArray(int a[], int n){
	if(n==0){
		return 0;
	}
	return sumArray(a,n-1)+a[n-1];
}
int main(){
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",sumArray(a,n));
}
