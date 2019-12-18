#include<stdio.h>
int main(){
	int n, pn1,pn2,pd;
	printf("Nhap n:");
	scanf("%d",&n);
	// n=333
	pn1=n/100;
	pn2=(n%100)/10;
	pd=(n%100)%10;
	int sum=pn1+pn2+pd;
	if(sum%3==0){
		printf("Chia het cho 3");
	}
	else{
		printf("Khong chia het cho 3");
	}
}
