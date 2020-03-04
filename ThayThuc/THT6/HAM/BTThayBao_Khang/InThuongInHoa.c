#include<stdio.h>
int lowCase(char c){
	if(c>=65 && c<=90){
		return  c+32;
	}
	else return c;
}
int main(){
	printf("%c\n", lowCase('a'));
}
