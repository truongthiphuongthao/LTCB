#include<stdio.h>
int main(){
	freopen("input.txt","r",stdin);
    float n,tongt,tgtb;
    int i;
    scanf("%f",&n);
    float a[100];
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
    	tongt+=a[i];
	}
	tgtb=tongt/n;
	printf("%.2f %.2f",tongt,tgtb);
    
}
