#include<stdio.h>
void in10So(int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d ",i);
		if(i%10==0){
			printf("\n");
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	in10So(n);
}
