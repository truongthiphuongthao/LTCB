#include<stdio.h>
void displayPrevious(int a[], int n){
	int i;
	if(n==1){
		a[0]=0;
//		a[1]=1;
	}
	else{
		a[0]=0;
		a[1]=1;
		for(i=2;i<=n;i++){
				a[i]=a[i-1]+a[i-2];
			}
		}
}
int main(){
	int n,a[100],i;
	scanf("%d",&n);
	displayPrevious(a,n);
	for(i=0;i<n;i++){
		 printf("%d",a[i]);
		 if(i<n-1) printf(", ");
	}
}
