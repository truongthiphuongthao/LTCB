#include<stdio.h>
#include<stdbool.h>
// phuong thao
// phuong thao
// So sanh chuoi bang nhau
bool mycmp(char s1[],char s2[]){
	int i;
	if(strlen(s1)!=strlen(s2)){
		return false;
	}
	for(i=0;i<strlen(s1);i++){
		if(s1[i]!=s2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	char s1[100],s2[100];
	printf("Chuoi thu 1:");
	gets(s1);
	printf("Chuoi thu 2:");
	gets(s2);
	if(mycmp(s1,s2)==false){
		printf("Hai chuoi khong bang nhau");
	}else{
		printf("Hai chuoi bang nhau");
	}
}
