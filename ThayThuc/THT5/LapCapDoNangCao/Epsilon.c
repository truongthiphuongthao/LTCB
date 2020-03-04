#include<stdio.h>
double __abs__(double x){
	if(x < 0) return -x;
	return x;
}
double ketQua(int a, double epsilon){
	double x0, xn;
	x0=(1+a)/2.0;
	xn=(x0+(a/x0))/2.0;
	while(__abs__((xn-x0)/x0)>=epsilon){
		x0=xn;
		xn=(x0+(a/x0))/2.0;
	}
	return xn;
}
int main(){
	int a; 
	double epsilon;
	scanf("%d %lf",&a,&epsilon);
	printf("%.8lf",ketQua(a,epsilon));
	
}
