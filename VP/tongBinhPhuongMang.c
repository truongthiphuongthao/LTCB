#include<stdio.h>
int tongBinhPhuong(int a[],int n){
	int i,tong=0;
	for(i=0;i<n;i++){
		tong+=a[i]*a[i];
	}
	return tong;
}
int main(){
	int a[1000],i,n;
//	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",tongBinhPhuong(a,n));
}
