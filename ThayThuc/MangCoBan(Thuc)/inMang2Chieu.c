#include<stdio.h>
void inMaTran(int a[][100], int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m, n, i, j, a[100][100];
	freopen("input.txt","r",stdin);
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d ",&a[i][j]);
		}
	}
	inMaTran(a,m,n);
}
