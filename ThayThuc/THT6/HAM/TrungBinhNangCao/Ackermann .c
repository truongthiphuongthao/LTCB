#include<stdio.h>
int A(int m, int n){
	if(m==0){
		return n + 1;
	}
	if(m>0 && n==0){
		return A(m-1,1);
	}
	return A(m-1,A(m,n-1));
}
int main(){
	int i;
	for(i=0;i<=3;i++)
	    printf("%d\t",A(i,10));
}
