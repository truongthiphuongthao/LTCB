#include<stdio.h>
int main(){
	float lt, th1, th2, th3, th4,dtb;
	freopen("input.txt","r",stdin);
	scanf("%f %f %f %f %f",&lt,&th1,&th2,&th3,&th4);
	dtb=(lt+th1+th2+th3+th4)/5;
	if(dtb>=9)
	{ 
	  printf("Diem so: %.1f\nDiem chu: A",dtb);
	}
	if(dtb>=8 && dtb <9){
	  printf("Diem so: %.1f\nDiem chu: B+",dtb);
	}
	if(dtb>=7 && dtb <8){
	  printf("Diem so: %.1f\nDiem chu: B",dtb);
	}
	if(dtb>=6 && dtb <7){
	  printf("Diem so: %.1f\nDiem chu: C+",dtb);
	}
	if(dtb>=5 && dtb <6){
	  printf("Diem so: %.1f\nDiem chu: C",dtb);
	}
	if(dtb>=4.5 && dtb <5){
	  printf("Diem so: %.1f\nDiem chu: D+",dtb);
	}
	if(dtb>=4 && dtb <4.5){
	  printf("Diem so: %.1f\nDiem chu: D",dtb);
	}
	if( dtb <4){
	  printf("Diem so: %.1f\nDiem chu: F",dtb);
	}
}

