#include<stdio.h>
int locate(int x, int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==x){
			return i;
		}
	}
	return n;
}
int main(){
	int A[]={1};
	int i;
	int n = sizeof(A)/sizeof(int);
	printf("%d",locate(0,A,n));
}
