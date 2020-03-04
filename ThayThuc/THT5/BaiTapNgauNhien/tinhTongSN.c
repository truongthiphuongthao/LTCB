#include<stdio.h>
int tinhTong(int a[], int n){
	int tong=0,i;
	for(i=0;i<n;i++){
		tong+=a[i];
	}
	return tong;
}
int main(){
	int a[100],n=0;
	while(1){
		scanf("%d",&a[n]);
		if(a[n]==0) break;
		n++;
	}
	printf("%d",tinhTong(a,n));
}
