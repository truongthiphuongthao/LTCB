#include<stdio.h>
int tinhN(float s){
	int i;
	float tong =1.0;
	for(i=1;i<=20000;i++){
		tong=tong+1/(float)(i+1);
		if(tong>s){
			return (int)(i+1);
		}
	}
	return 0;
}
int main(){
	float s;
	scanf("%f",&s);
	printf("%d",tinhN(s));
}
