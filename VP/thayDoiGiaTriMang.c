#include<stdio.h>
int thayGiaTri(int a[],int n,int x,int y){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==x){
			a[i]=y;
		}
	}
	return a[i];
}
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int a[1000],n,i,x,y;
//	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d %d",&x,&y);
	inMang(a,n);
	thayGiaTri(a,n,x,y);
	inMang(a,n);
}

