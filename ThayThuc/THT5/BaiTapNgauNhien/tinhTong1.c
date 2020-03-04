#include<stdio.h>
float tinhTong(int n){
	int i;
	float tong=0;
	for(i=1;i<=n;i++){
		tong+=1.0*i/(i+1);
	}
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%.2f",tinhTong(n));
}
