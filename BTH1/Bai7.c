#include<stdio.h>
int main(){
	int r1,r2,r3;
	double r;
	printf("r1:");
	scanf("%d",&r1);
	printf("\nr2:");
	scanf("%d",&r2);
	printf("\nr3:");
	scanf("%d",&r3);
	r= (r1*r2*r3)/(r1*r2)+(r1*r3)+(r2*r3);
	printf("Tong tro: %lf",r);
}
