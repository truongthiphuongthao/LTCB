#include<stdio.h>
void inDaoNguocSo(int n){
	int number, reverse=0;
	while(n!=0){
		number=n%10;
		reverse=reverse*10+number;
		n=n/10;
	}
	printf("%d",reverse);
}
int main(){
	int n;
	scanf("%d",&n);
	inDaoNguocSo(n);
}
