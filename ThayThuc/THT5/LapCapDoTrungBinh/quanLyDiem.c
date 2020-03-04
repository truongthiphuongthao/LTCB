#include<stdio.h>
float diemLon(float a[], int n){
	int i;
	float max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
float diemNho(float a[], int n){
	int i;
	float min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
float dtb(float a[], int n){
	float tongDiem=0;
	int i;
	for(i=0;i<n;i++){
		tongDiem+=a[i];
	}
	return (float)tongDiem/n;
}
int main(){
	int n, i;
	float a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("%.2f %.2f %.2f",dtb(a,n),diemLon(a,n),diemNho(a,n));
}
