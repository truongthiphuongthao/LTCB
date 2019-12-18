#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Nhap chuoi:");
//	scanf("%s",&s);
	gets(s);
	int count=0,i;
	int lens=strlen(s);
//	printf("%d",lens);
	for(i=0;i<lens;i++){
		if(s[i]==' '){
			count++;
		}
	}
	printf("So tu=%d",count+1);
}
