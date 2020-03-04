#include<stdio.h>
#include<math.h>
int getHours(int M){
	int k=0;
	if(M==1){
		return 1;
	}
	while(pow(2,k)<M){
		if(pow(2,k)==M){
			break;
		}
		k++;
	}
	return k;
}
int main(){
	printf("%d",getHours(65));
}
