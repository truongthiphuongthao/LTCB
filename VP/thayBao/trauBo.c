#include<stdio.h>
int main(){
	int a,b,c;
	for(a=0;a<=100;a++){
		for(b=0;b<=100-a;b++){
			c=(100-5*a-3*b)*5;
			if(a+b+c==100 && c>=0){
				printf("%d %d %d\n",a,b,c);
			}
		}
	}
	
}
