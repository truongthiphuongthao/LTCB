#include<stdio.h>
int isPower2(int n){
	if(n==1){
		return 1;
	}
	if(n%2==0){
		return 1;
	}
	return 0;
}
int main(){
//	if (isPower2(16))
//	  printf("YES");
//	else  printf("NO");
    printf("%d", isPower2(11));
}
