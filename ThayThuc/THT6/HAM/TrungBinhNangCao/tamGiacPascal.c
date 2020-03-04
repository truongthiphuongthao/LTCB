#include<stdio.h>
void inTamGiacPascal(long long a[][100], int n){
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			if(j==0 || j==i){
				a[i][j]=1;
			}
			else {
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			printf("%5lld",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	long long a[100][100];
	scanf("%d",&n);
	inTamGiacPascal(a,n);
}
