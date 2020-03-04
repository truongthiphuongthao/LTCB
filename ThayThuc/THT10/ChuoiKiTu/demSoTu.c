#include<stdio.h>
#include<string.h>
void demSoTu(char s[]){
	int i, len,dem=0;
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]==' ' && s[i+1]!=' '){
			dem++;
		}
	}
	printf("%d",dem+1);
}
int main(){
	char s[500];
	scanf("%[^\n]s",s);
	printf("%s\n",s);
	demSoTu(s);
}
