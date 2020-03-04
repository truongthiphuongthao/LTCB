#include<stdio.h>
int timUCLN(int a, int b){
	if(b==0){
		return a;
	}
	return timUCLN(b,a%b);
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(timUCLN(a,b)<0){
		printf("GCD(%d, %d) = %d",a,b,-timUCLN(a,b));
	}
	else printf("GCD(%d, %d) = %d",a,b,timUCLN(a,b));
}
