#include<stdio.h>
int main(){
	float a,x;
	printf("Nhap a:");
	scanf("%f",&a);
	printf("\nNhap x:");
	scanf("%f",&x);
	if(x >0 && a>0 && a!=1){
		printf("log_a(x)=%2.f",log(x)/log(a));
	}
	else{
		printf("Ban phai nhap x >0 , a>0, a!=1");
	}
	
	
}
