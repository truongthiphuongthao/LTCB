#include<stdio.h>
int tongSo3(int n){
	int i, tong =0;
	for(i=1;i<=n;i++){
		tong+=3;
	}
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tongSo3(n));
}
