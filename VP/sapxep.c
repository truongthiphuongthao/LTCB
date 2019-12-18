#include<stdio.h>
void sort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void in(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
	int n,i;
	printf("n=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Phan tu thu %d:",(i+1));
		scanf("%d",&a[i]);
	}
	sort(a,n);
	in(a,n);
}
