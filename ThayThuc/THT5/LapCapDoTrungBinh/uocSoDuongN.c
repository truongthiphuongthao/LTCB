#include<stdio.h>
void inUocSo(int n){
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inUocSo(n);
}
