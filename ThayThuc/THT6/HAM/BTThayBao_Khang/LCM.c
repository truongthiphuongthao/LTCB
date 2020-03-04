#include<stdio.h>
int LCM(int a, int b){
	int max, lcm;
	if(a > b){
		max = a;
	}
	else max = b;
	while(1){
		if(max % a==0 && max %b==0){
			lcm=max;
			break;
		}
		max++;
	}
	return lcm;
}
int main(){
	printf("%d", LCM(-6,9));
}
