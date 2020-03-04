#include<stdio.h>
int makeReverse(int a[], int n){
	int i,j;
	for(i=0;i<n/2;i++){
		int tam=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tam;
	}
}
int main(){
	int A[]={1,2,3,4};
	int i;
	int n = sizeof(A)/sizeof(int);
	for(i=0;i<=n-1;i++)
	    printf("%d ",A[i]);
	printf("\n");
	makeReverse(A,n);
	for(i=0;i<=n-1;i++)
	    printf("%d ",A[i]);
}
