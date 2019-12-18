#include<stdio.h>
int main(){
	int n,pnguyen,pdu,i;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[100];
    for(i=0;n>0;i++){
    	a[i]=n%2;
    	n=n/2;
	}
	// Dao nguoc so do ra
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
	
}
