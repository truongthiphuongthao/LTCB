#include<stdio.h>
void HoanDoi(int a[][100],int n,int m, int x, int y){
	int i;
	// Chay theo hang'
	for(i=0;i<m;i++){
		int temp=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=temp;
	}
}
void in(int a[][100],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}
int main(){
	int n,a[100][100],j,m,i;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("\nNhap m:");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			// Phan tu hang i,cot j
			printf("Phan tu thu [%d,%d]=", i, j);
			scanf("%d",&a[i][j]);
		}
	}
    in(a,n,m);
	int x,y;
	printf("Nhap hang :");
	scanf("%d",&x);
	printf("\nHoan doi voi hang:");
	scanf("%d",&y);
	HoanDoi(a,n,m,x,y);
	in(a,n,m);
}
