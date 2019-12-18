#include<stdio.h>
int main(){
	char s_pres[100],i,s_next[100];
	printf("Nhap vao mot chuoi:");
	gets(s_pres);
	int n,count=0;
	printf("So ki tu:");
	scanf("%d",&n);
	strncpy(s_next,s_pres,n);
	printf("%s",s_next);
}
