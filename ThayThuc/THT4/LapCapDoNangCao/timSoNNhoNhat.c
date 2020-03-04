#include<stdio.h>
int tinhN(float s){
	float tong=1.0;
	int n=1;
	while(s>=tong){
		tong=tong+1.0/(n+1);
		n++;
	}
	return n;
}
int main(){
	float s;
	scanf("%f",&s);
	printf("%d",tinhN(s));
}
