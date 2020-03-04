#include<stdio.h>
int demSoLe(int a[], int n){
	int dem=0,i;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			dem++;
		}
	}
	return dem;
}
void inSoLe(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
	if(demSoLe(a,n)==0){
		printf("NONE");
	}
}
int main(){
	int n, a[100], i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",demSoLe(a,n));
	inSoLe(a,n);
}
