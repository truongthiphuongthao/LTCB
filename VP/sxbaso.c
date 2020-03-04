#include<stdio.h>
int main(){
	int a,b,c,tam;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		tam=a;
		a=b;
		b=tam;
	}
    if(a>c){
    	tam=a;
    	a=c;
    	c=tam;
	}
	if (b>c) {
		tam=b;
		b=c;
		c=tam;
	}
	printf("%d %d %d",a,b,c);
}
