#include<stdio.h>
#define max 50
int tinhTong(int a[], int n){
	int i, sum=0;
	for(i=0;i<=n;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int a[100], n=0;
	while(1){
		scanf("%d",&a[n]);
		if(a[n]==0) break;
		n++;
	}
	printf("%d",tinhTong(a,n));
}
