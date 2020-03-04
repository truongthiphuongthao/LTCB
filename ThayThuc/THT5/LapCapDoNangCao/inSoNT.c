#include<stdio.h>
#include<math.h>
int ktSNT(int n){
	int i;
	if(n<2){
		return 0;
	}
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
void inSNT(int n){
	int i;
	for(i=1;i<=n;i++){
		if(ktSNT(i)){
			printf("%d ",i);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	inSNT(n);
}
