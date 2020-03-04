#include<stdio.h>
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int demSoLeMang(int a[], int n){
	int i, dem=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			++dem;
		}
	}
	return dem;
}
void inSoLeMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int n, a[100], i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	inMang(a,n);
	printf("\n%d\n",demSoLeMang(a,n));
	inSoLeMang(a,n);
}
