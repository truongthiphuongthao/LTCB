#include<stdio.h>
#include<string.h>
void soSanhChuoi(char s1[], char s2[]){
	if(strcmp(s1,s2)==0){
		printf("1 = 2");
	}
	else if(strcmp(s1,s2)>0){
		printf("1 > 2");
	}
	else {
		printf("1 < 2");
	}
}
int main(){
	char s1[100], s2[100];
	fgets(s1,100,stdin);
	fflush(stdin);
	fgets(s2,100,stdin);
	soSanhChuoi(s1,s2);
}
