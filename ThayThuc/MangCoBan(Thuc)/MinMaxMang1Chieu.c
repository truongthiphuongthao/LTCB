#include<stdio.h>
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int minMang(int a[], int n){
	int i;
	int min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
int maxMang(int a[], int n){
	int i;
	int max=a[0];
	for(i=0;i<n;i++){
		if(max <a[i]){
			max=a[i];
		}
	}
	return max;
}
int main(){
	int n, a[100], i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	inMang(a,n);
	printf("\n%d %d",minMang(a,n),maxMang(a,n));
}
