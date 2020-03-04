#include<stdio.h>
#define MAX 1000
int main(){
	int a[MAX],n,i,dem;
	dem=0;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			++dem;
		}
	}
	printf("\n%d",dem);
	printf("\n");
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
}
