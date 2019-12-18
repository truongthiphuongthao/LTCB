#include<stdio.h>
#include"math.h"
int main(){
	int a,b,c,cv;
	double s,p;
	printf("Nhap a :");
	scanf("%d",&a);
	printf("\n Nhap b:");
	scanf("%d",&b);
	printf("\n Nhap c:");
	scanf("%d",&c);
    cv=a+b+c;
    p=cv/2;
    printf("\n p:%f",p);
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\n Ket qua: ");
    printf("\n Chu vi: %d",cv);
    printf("\n Dien tich: %f",s);
}
