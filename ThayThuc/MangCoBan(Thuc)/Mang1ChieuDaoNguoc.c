#include<stdio.h>
int main(){
	int n, a[100], i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
