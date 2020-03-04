#include<stdio.h>
// Tim Min
int minMang(int a[][100],int n){
	int i,j;
	int min=a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(min>a[i][j])
			   min = a[i][j];
			}
		}
	return min;
}
// Tim Max
int maxMang(int a[][100], int n){
	int i,j;
	int max = a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(max<a[i][j])
			 max = a[i][j];
			}
		}
	return max;
}
// Xuat mang
void xuatMang(int a[][100], int n){
	printf("Xuat mang \n");
	int i,j;
	for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
	 	 printf("%d ",a[i][j]);
	 	}
	 	printf("\n");
	}
}
int main(){
	int a[100][100],n,i,j;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			}
	}
	xuatMang(a,n);
	int min=minMang(a,n);
	int max=maxMang(a,n);
	printf("MIN: %d",min);
	printf("\nMAX: %d",max);
	return 0;
}
