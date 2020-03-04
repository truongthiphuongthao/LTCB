#include<stdio.h>
double power(float a, int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return a;
	}
	return power(a,n-1)*a;
}
int main(){
//	printf("%.4f\n", power(2, 3));
//    printf("%.4f\n", power(3.14, 10));
//printf("%.4f\n", power(-2.0, 5));
printf("%.4f\n", power(-3.123, 0));
}
