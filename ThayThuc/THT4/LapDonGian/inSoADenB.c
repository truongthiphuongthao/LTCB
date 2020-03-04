#include<stdio.h>
void inSo(int a, int b){
	int i;
	for(i=a;i<=b;i++){
		printf("%d\n",a++);
	}
}
int main(){
	int a, b;
	scanf("%d %d",&a,&b);
	inSo(a,b);
}
