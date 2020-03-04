#include<stdio.h>
int ktUoc(int n){
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			return i;
		}
	}
	return 0;
}
int inHopSo(int n){
	int i;
	for(i=1;i<=n-1;i++){
		if(ktUoc(n)*i==n){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(inHopSo(n)){
		printf("%d la hop so.",n);
	}
	else printf("%d khong phai la hop so.",n);
}
