#include<stdio.h>
#include<math.h>
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int ktSNTMang(int n){
	int i;
	if(n<2){
		return 0;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int demSNTMang(int a[], int n){
	int i, dem=0;
	for(i=0;i<n;i++){
		if(ktSNTMang(a[i])==1){
			++dem;
		}
	}
	return dem;
}
void inSNTMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(ktSNTMang(a[i])){
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
	printf("\n%d\n",demSNTMang(a,n));
	inSNTMang(a,n);
}
