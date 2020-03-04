#include<stdio.h>
void inTamGiac(int n){
	int i,j;
	for(i=1;i<=n-1;i++){
        printf ("*");
		for(j=1;j<=i-2;j++){
			printf("-");
		}
		if (i>1) printf("*");
		printf ("\n");
	}
	for (i=1;i<=n;++i) printf("*");
}
int main(){
	int n;
	scanf("%d",&n);
	inTamGiac(n);
}
