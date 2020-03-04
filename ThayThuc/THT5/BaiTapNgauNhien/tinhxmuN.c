#include<stdio.h>
float tinhX(float x, int n){
	if(n==1){
		return x;
	}
	if(n==0){
		return 1;
	}
	return tinhX(x,n-1)*x;
}
int main(){
	float x;
	int n;
	scanf("%f %d",&x,&n);
	printf("%.4f",tinhX(x,n));
	
}
