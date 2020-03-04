#include<stdio.h>
void readArray(int a[], int n){
	int i=n-1;
	if(n==0){
		return;
	}
	else{
		scanf("%d",&a[n-i-1]);
		readArray(a+1,n-1);
	}
}
void printArray(int a[], int n){
	int i=n-1;
	if(n==0){
		return;
	}
	printf("%d\n",a[n-i-1]);
	printArray(a+1,n-1);
}
int main(){
	int n,a[100];
	scanf("%d",&n);
	readArray(a,n);
	printArray(a,n);
}
