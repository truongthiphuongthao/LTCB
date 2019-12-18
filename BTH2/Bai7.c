#include<stdio.h>
int main(){
	double sotien;
	int thang;
	printf("Nhap so tien gui:");
	scanf("%ld",&sotien);
	printf("Nhap so thang:");
	scanf("%d",&thang);
	while(thang!=0){
		if(thang%3==0){
			sotien*=(1+0.04);
			thang-=3;
		}
		else{
			sotien*=(1+0.024);
			thang-=1;
		}
		
	}
	printf("Tong ca von lan lai:%.2ld",sotien);
	return 0;
}
