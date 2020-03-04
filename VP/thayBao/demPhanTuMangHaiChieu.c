#include<stdio.h>
void inViTriTrung(int a[][100],int m,int n,int ptu){
	int i,j,dem=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==ptu){
				printf("(%d, %d) ",i,j);
				++dem;
			}
		}
	}
	if(dem!=0) printf("\n");
	printf("%d",dem);
}
int main(){
	int a[100][100],m,n,i,j,ptu;
	freopen("input.txt","r",stdin);
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	scanf("%d",&ptu);
	inViTriTrung(a,m,n,ptu);
}
