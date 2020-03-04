#include<stdio.h>
int tinhTong(int n){
	if(n==0){
		return 0;
	}
	return n + tinhTong(n-1);
}
int tinhGiaiThua(int n){
	if(n==1){
		return 1;
	}
	return n * tinhGiaiThua(n-1);
}
int tinhLuyThua(int a, int n){
	if(n==0){
		return 1;
	}
	return tinhLuyThua(a,n-1)*a;
}
int main(){
	int n,a;
	scanf("%d %d",&n,&a);
	printf("%d",tinhTong(n));
	printf("\n%d",tinhGiaiThua(n));
	printf("\n%d",tinhLuyThua(a,n));
}
