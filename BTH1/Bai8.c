#include<stdio.h>
int main(){
	float a,b,c;
	double dtb;
	printf("Diem mon Toan:");
	scanf("%f",&a);
	printf("\nDiem mon Ly:");
	scanf("%f",&b);
	printf("\nDiem mon Hoa:");
	scanf("%f",&c);
	dtb = (a+b+c)/3;
	printf("Diem trung binh: %.2lf",dtb);
}
