#include<stdio.h>
int demSoN(int n){
	int dem;
	dem=0;
	while(n!=0){
		++dem;
		n=n/10;
	}
	return dem;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",demSoN(n));
}
