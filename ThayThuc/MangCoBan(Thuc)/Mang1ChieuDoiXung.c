#include<stdio.h>
int isPalindrome(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]!=a[n-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int A[]={0};
	int n = sizeof(A)/sizeof(int);
	printf("%d",isPalindrome(A,n));
}
