#include<stdio.h>
void inTamGiacPascal(int n){
	int i,j;
	long long c[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(j==0 || j==i){
				c[i][j]=1;
			}
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
			printf("%lld ",c[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inTamGiacPascal(n);
}
