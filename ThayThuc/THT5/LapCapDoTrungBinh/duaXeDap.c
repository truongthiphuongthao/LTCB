#include<stdio.h>

float tongTGTD(float a[], int n){
	int i;
	float tongTG=0;
	for(i=0;i<n;i++){
		tongTG+=a[i];
	}
	return tongTG;
}
float thoiGianTDTB(float a[], int n){
	return (float)tongTGTD(a,n)/n;
}
int main(){
	int n, i;
	float a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("%.2f %.2f",tongTGTD(a,n),thoiGianTDTB(a,n));
}
