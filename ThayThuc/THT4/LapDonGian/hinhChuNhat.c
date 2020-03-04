#include<stdio.h>
void inHCN(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=10;j++){
			if(i==1 || i==n || j==1 || j==10){
				printf("#");
				if(j==10){
					printf("\n");
				}
			}
			else printf(" ");
		}
	}
}
int main() {
    int n;
    scanf("%d",&n);
    inHCN(n);
} 
