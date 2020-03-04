#include<stdio.h>
// vd 1 2 3 4
int isSort(int a[], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int A[]={-1,1,4, 5,10, 15};
	int n = sizeof(A)/sizeof(int);
	if (isSort(A,n))
	    printf("YES");
	else
	    printf("NO");
}
