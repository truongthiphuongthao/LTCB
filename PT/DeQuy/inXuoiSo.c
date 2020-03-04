#include<stdio.h>
void inXuoiSo(int n){
	if(n==0) return;
	inXuoiSo(n/10);
	printf("%d ",n%10);
}
int main(){
	int n;
	scanf("%d",&n);
	inXuoiSo(n);
}
