#include<stdio.h>
int main(){
	int a,b,c,i;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	int max=a;
	if(max<b) max = b;
	if (max<c) max=c;
	printf("%d",max);
}
