#include<stdio.h>
void inBangCuuChuong(int n){
	int i;
	printf("%d Times Table\n",n);
	printf("====================\n");
	for(i=1;i<=10;i++){
		printf("%d x %d = %d",n,i,n*i);
		printf("\n");
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	inBangCuuChuong(n);
}
