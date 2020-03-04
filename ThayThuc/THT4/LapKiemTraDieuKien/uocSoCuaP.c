#include<stdio.h>
void inUS(int a, int b, int p){
	int i,dem=0;
	for(i=a;i<=b;i++){
		if(p%i==0){
			++dem;
		}
	}
	if(dem!=0){
		printf("Co it nhat %d so trong doan [%d, %d] la uoc cua %d.",dem,a,b,p);
	}
	else printf("Khong co so nao trong doan [%d, %d] la uoc cua %d.",a,b,p);
}
int main(){
	int a, b, p;
	scanf("%d %d %d",&a,&b,&p);
	inUS(a,b,p);
	
}
