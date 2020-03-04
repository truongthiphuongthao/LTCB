#include<stdio.h>
void inMang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int inMangTangDan(int a[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	return a[i];
}
int main(){
	int n, a[100], i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	inMang(a,n);
	inMangTangDan(a,n);
	printf("\n");
	inMang(a,n);
}
