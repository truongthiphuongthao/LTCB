#include<stdio.h>
int min(int a[], int n){
	int i;
	int min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
int max(int a[],int n){
	int i;
	int max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
void inMang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[1000],n,m,i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	inMang(a,n);
	int Min=min(a,n);
	int Max=max(a,n);
	printf("\n%d %d",Min,Max);
}
