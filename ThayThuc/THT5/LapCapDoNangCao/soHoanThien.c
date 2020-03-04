#include<stdio.h>
int ktUoc(int n){
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
int ktSoHoanThien(int n){
	int i, tong=0;
	for(i=1;i<=n;i++){
		if(ktUoc(i)){
			tong+=i;
			if(tong==n){
				return 1;
			}
		}
	}	
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(ktSoHoanThien(n)){
		printf("YES");
	}
	else printf("NO");
}
