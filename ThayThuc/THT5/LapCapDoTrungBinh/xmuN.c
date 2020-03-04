#include<stdio.h>
float tinhxN(float x, int n){
	if(n==1){
		return x;
	}
	else return tinhxN(x,n-1)*x;
}
int main(){
	float x;
	int n;
	scanf("%f %d",&x,&n);
	printf("%.2f",tinhxN(x,n));
}
