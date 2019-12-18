#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, denta;
	printf("Nhap a:");
	scanf("%f",&a);
	printf("\nNhap b:");
	scanf("%f",&b);
	printf("\nNhap c:");
	scanf("%f",&c);
	denta = b*b -4*a*c;
	printf("denta=%f",denta);
	if(denta < 0 ){
		printf("Phuong trinh vo nghiem");
	}
	else if(denta>0){
		printf("Phuong trinh co hai nghiem phan biet");
		printf("\nx1=%f",(-b+sqrt(denta))/2*a);
		printf("\nx2=%f",(-b-sqrt(denta))/2*a);
	
	}
	else{
		printf("Phuong trinh co nghiem kep");
		printf("x1=x2=%f",-b/2*a);
	}
}
