#include<stdio.h>
double ketQua(double epsilon){
	int n = 0;
	double t = 4.0/(2*n+1);
	double pi=0;
	while(t>epsilon){
		if(n%2==0){
			pi=pi+t;
		}
		else {
			pi=pi-t;
		}
		n=n+1;
		t=4.0/(2*n+1);
	}
	return pi;
}
int main(){
	double epsilon;
	scanf("%lf",&epsilon);
	printf("pi = %.8lf",ketQua(epsilon));
}
