#include<stdio.h>
void print_c(char c, int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%c",c);
	}
}
int main(){
	int i;
    for (i = 1; i <= 6; i++) {
	    print_c('*', i);
	    print_c('\n', 1);
	}
}
