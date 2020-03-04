#include<stdio.h>
float tinhTong(int n){
	float tong=0;
	int i;
	for(i=1;i<=n;i++){
		tong+=(float)i/(i+1);
	}
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%.2f",tinhTong(n));
}
