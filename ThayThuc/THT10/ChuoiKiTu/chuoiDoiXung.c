#include<stdio.h>
#include<string.h>
int palindrome(char s[]){
	int i, len;
	len=strlen(s);
	for(i=0;i<=len;i++){
		if(s[i]!=s[len-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char s[500];
    scanf ("%[^\n]s", s);
	printf("%s\n",s);
	if(palindrome(s)){
		printf("YES");
	}
	else printf("NO");
}
