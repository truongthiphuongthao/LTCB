#include<stdio.h>
int main(){
	int n,i,j;
	char c='A';
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",c);
		}
		++c;
		printf("\n");
	}
}
