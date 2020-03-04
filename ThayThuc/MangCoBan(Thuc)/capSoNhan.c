#include<stdio.h>
int isSeries(int k, int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[0]!=1){
			if(a[i]!=k*a[i+1]){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int A[]={2, 4, 8, 16, 32, 64, 128};
	int i;
	int n = sizeof(A)/sizeof(int);
	for(i=0;i<=n-1;i++)
	    printf("%d ",A[i]);
	printf("\n");
	
	if (isSeries(2,A,n))
	    printf("YES");
	else printf("NO");
}
