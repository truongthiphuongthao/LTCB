#include<stdio.h>
// Xuat ma tran A
void xuatMaTranA(int a[][100], int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			}
		printf("\n");
	}
}
//Xuat ma tran B
void xuatMaTranB(int b[][100], int u, int v){
	int i,j;
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
// Tinh tich
void tinhTich(int a[][100], int b[][100], int c[][100], int m, int n, int v){
	printf("Tich:\n");
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<v;j++){
			c[i][j]=0;
			for(k=0;k<v;k++){
			c[i][j]+=a[i][k]*b[k][j];	
			}
		}
	}
}
// Xuat ma tran tinh ket qua
void xuatMaTranC(int c[][100], int m, int v){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<v;j++){
			printf("%d ",c[i][j]);
			}
		printf("\n");
	}
}
int main(){
	freopen("input.txt","r",stdin);
	int a[100][100],b[100][100],c[100][100],n,m,u,v,i,j,h,t;
	scanf("%d%d",&m,&n);
	printf("Xuat ma tran A\n");
	printf("%d %d\n",m,n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&u,&v);
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			scanf("%d",&b[i][j]);
		}
	}
	xuatMaTranA(a,m,n);
	printf("\nXuat ma tran B");
	printf("\n%d %d\n",u,v);
	xuatMaTranB(b,u,v);
	tinhTich(a,b,c,m,n,v);
	xuatMaTranC(c,m,v);
}
