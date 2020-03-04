#include<stdio.h>
int tinhGiaiThua(int n){
	int tich=1;
	int i;
	for(i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tinhGiaiThua(n));
}
