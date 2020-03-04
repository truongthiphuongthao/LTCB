#include<stdio.h>
void nhapMaTran(int a[][100], int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d ",&a[i][j]);
		}
	}
}
void inMaTran(int a[][100], int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void inViTriTrung(int a[][100], int m, int n, int x){
	int i,j,dem=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==x){
				++dem;
				printf("(%d, %d) ",i,j);
			}
		}
	}
	if(dem!=0){
		printf("\n");
		printf("%d",dem);
	}
}
int main(){
	int m, n,a[100][100],x;
	freopen("input.txt","r",stdin);
	scanf("%d %d",&m,&n);
	nhapMaTran(a,m,n);
	scanf("%d",&x);
	inMaTran(a,m,n);
//	printf("\n");
	inViTriTrung(a,m,n,x);
}
