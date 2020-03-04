#include<stdio.h>
int isPerfect(int n){
	int i, tong = 0;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			tong+=i;
		}
	}
	if(tong==n){
		return 1;
	}
	else return 0;
}
int main(){
	if (isPerfect(24))
    printf("YES");
else
    printf("NO");
}
