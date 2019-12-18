#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("\nNhap b:");
	scanf("%d",&b);
	printf("\nNhap c:");
	scanf("%d",&c);
	// Lap mang chua ba so vua nhap
	int arr[3],i,temp,j;
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
    for( i=0;i<2;i++){
    	for( j=i+1;j<3;j++){
    		if(arr[j]>arr[i]){
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	printf("\nPhan tu lon nhat:%d",arr[0]);
	
}
