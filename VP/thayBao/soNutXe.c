#include<stdio.h>
int main(){
	int a,b,c,d,tongsoxe,sonut;
	for(a=0;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				for(d=0;d<=9;d++){
					tongsoxe=a+b+c+d;
					sonut=tongsoxe%10;
					if(sonut==9){
						printf("%d%d%d%d\n",a,b,c,d);
					}
				}
			}
		}
	}
}
