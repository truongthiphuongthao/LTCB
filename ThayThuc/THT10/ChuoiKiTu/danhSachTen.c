#include<stdio.h>
#include<string.h>
int main(){
	char list[40][51];
	int i,n;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++){
		fgets(list[i],50,stdin);
	}
	for(i=0;i<=n-1;i++){
		printf("%d. %s\n",i+1,list[i]);
	}
}
