#include<stdio.h>
void bangCuuChuong(int n){
	int i,j;
	printf("%d Times Table\n",n);
	printf("====================\n");
	for(i=1;i<11;i++){
		j=n*i;
		printf("%d x %d = %d ",n,i,j);
		printf("\n");
	}
}
int main(){
	int n,i;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	bangCuuChuong(n);
}
