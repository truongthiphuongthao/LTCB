#include<stdio.h>
void getFibo(int a[], int n){
	int i;
	if(n==1){
		a[0]=1;
		a[1]=1;
	}
	else{
		a[0]=1;
		a[1]=1;
		for(i=2;i<=n;i++){
			a[i]=a[i-1]+a[i-2];
//			printf("%d ",a[i]);
		}
	}
}
int main(){
	int A[50];
	int i,n;
	n=2;
	getFibo(A,n);
	for(i=0;i<=n;i++)
	    printf("%d ",A[i]);
    
	
}
