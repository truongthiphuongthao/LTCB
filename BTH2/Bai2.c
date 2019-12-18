#include<stdio.h>
int main(){
	// Tong hai do dai canh bat ki luon lon hon canh con lai
	int a,b,c,cv;
	double dt;
	printf("Nhap canh thu nhat:");
	scanf("%d",&a);
	printf("\nNhap canh thu hai:");
	scanf("%d",&b);
	printf("\nNhap canh thu ba:");
	scanf("%d",&c);
	// Dieu kien tro thanh mot tam giac
	if((a+b>c) || (a+c>b) || (b+c>a)){
		printf("Tao thanh mot tam giac");
		// Tinh chu vi
		cv=a+b+c;
		printf("\nChu vi tam giac:%d",cv);
		// Tinh dien tich
		dt=sqrt(cv*(cv-a)*(cv-b)*(cv-c));
		printf("\nDien tich tam giac:%lf",dt);
		
	}
	else{
		printf("Khong tao thanh tam giac");
	}
}
