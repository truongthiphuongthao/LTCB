#include<stdio.h>
int main(){
	float a,b,c,denta;
	freopen("input.txt","r",stdin);
	scanf("%f %f %f",&a,&b,&c);
	denta=b*b-4*a*c;
	if(denta<0){
		printf("No real roots");
	}
	else if(denta==0){
		printf("x = %f",-b/2*a);
	}
	else{
		printf("x1 = %.2f\nx2 = %.2f",(-b-sqrt(denta))/2*a,(-b+sqrt(denta))/2*a);
	}
}
