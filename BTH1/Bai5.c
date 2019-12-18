#include<stdio.h>
#include<math.h>
int main(){
	int x1,y1,x2,y2;
	double hsg,kc;
	printf("x1=");
	scanf("%d",&x1);
	printf("\ny1=");
	scanf("%d",&y1);
	printf("\nx2=");
	scanf("%d",&x2);
	printf("\ny2=");
	scanf("%d",&y2);
	hsg = (y2-y1)/(x2-x1);
	printf("He so goc:%lf",hsg);
	kc=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
	printf("\nKhoang cach:%lf",kc);
	
}
