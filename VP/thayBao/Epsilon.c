#include<stdio.h>
//#include<math.h>
double __abs__ (double x) {
	if (x < 0) return -x;
	return x;
}

int main(){
	double x0, xn, esl;
	double a;
	scanf("%lf %lf",&a,&esl);
	x0=(1+a)/2.0;
	xn=(x0+a/x0)/2.0;
	while(__abs__((xn-x0))>=esl) {
		x0=xn;
		xn=(x0+a/x0)/2.0;
	}
	printf("%.8lf", xn);
}
