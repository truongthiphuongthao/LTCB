#include<stdio.h>
void reduce(int a, int b){
	int i, lcm,u,v;
	for(i=1;i<=a && i<=b ;i++){
		if(a%i==0 && b%i==0){
			lcm=i;
		}	
	}
	u=a/lcm;
	v=b/lcm;
	printf("%d/%d = %d/%d",a,b,u,v);
}
int main(){
//	reduce(4, 8);
//reduce(3, 9);
//reduce(1000,1500);
reduce(5, 2);
}
