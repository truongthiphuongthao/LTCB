#include<stdio.h>
#include<math.h>
#define MAX 1000
int kiemTraSNT(int n){
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
int demSNT(int a[],int n){
	int dem=0;
	int i;
	for(i=0;i<n;i++){
		if(kiemTraSNT(a[i])){
			++dem;
		}
	}
	return dem;
}
void inSNT(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(kiemTraSNT(a[i])){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int a[MAX],n,i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n%d\n",demSNT(a,n));
	inSNT(a,n);
	

}
