#include<stdio.h>
int lowCase(char c){
	return c+32;
}
int main(){
	printf("%c\n", lowCase('A'));
}
