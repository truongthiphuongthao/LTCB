#include<stdio.h>
double S(int n){
	if(n==1){
		return 1;
	}
	return ((double)1)/n +S(n-1);
}
int main(){
	printf("%.12lf",S(50));
}
