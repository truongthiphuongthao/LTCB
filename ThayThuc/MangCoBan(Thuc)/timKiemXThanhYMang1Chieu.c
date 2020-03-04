#include<stdio.h>
void inMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void thayXThanhY(int x, int y,int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==x){
			a[i]=y;
		}
	}
	inMang(a,n);
}
int main(){
	int n, a[100], i,x,y;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d %d",&x,&y);
	inMang(a,n);
	printf("\n");
	thayXThanhY(x,y,a,n);
	
}
