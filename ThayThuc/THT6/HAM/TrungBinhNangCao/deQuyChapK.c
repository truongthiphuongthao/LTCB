#include<stdio.h>
int C(int n, int k){
	if(k==0 || k==n){
		return 1;
	}
	return C(n-1,k-1)+C(n-1,k);
}
int main(){
//	printf("%d",C(5,3));
//  printf("%d",C(10,10));
//  printf("%d",C(20,10));
    printf("%d",C(20,20));
}
