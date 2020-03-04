#include<stdio.h>
int fibonacci(int n){
	if(n<0){
		return -1;
	}
	else if( n==0 || n==1){
		return n;
	}
	else{
		return fibonacci(n-1) +fibonacci(n-2);
	}
}
void in(int n){
	int i;
	for(i=0;i<=n;i++){	
	    if(n==0){
	    	printf("0");
	    	break;
	    }
		if(fibonacci(i)>n){
			break;
		}
		else{
			printf("%d",fibonacci(i));
			if(fibonacci(i)<=n){
				printf(", ",fibonacci(i));
			}
		}		
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	in(n);
}
