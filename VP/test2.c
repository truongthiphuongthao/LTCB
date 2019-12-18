#include<stdio.h>
int getMin(int a[],int n){
	int i;
	int min=a[0];
	for(i=1;i<n;i++){
		if(a[i]<min) min=a[i];
	}
	return min;
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
	int gtMin=getMin(a,n);
	printf("Min=%d",gtMin);
//	int max=a[0];
//	int min=a[0];
//	for(i=1;i<n;i++){
//		if(a[i]>max) max =a[i];
//	}
//	printf("%d",max);
//	for(i=1;i<n;i++){
//		if(a[i]<min) min =a[i];
//	}
//	printf("\n%d",min);
//	
}
