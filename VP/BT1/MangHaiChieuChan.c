#include<stdio.h>
// hien thi phan tu chan
void phanTuChan(int a[][100], int n, int m){
	int i,j;
	printf("Phan tu chan:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]%2==0){
				printf("%d ",a[i][j]);
			}
		}
	}
}
// xuat mang
void xuatMang(int a[][100], int n, int m){
	printf("Xuat mang 2 chieu\n");
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[100][100],n,m,i,j;
	freopen("input.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	xuatMang(a,n,m);
	phanTuChan(a,n,m);
	return 0;
}
